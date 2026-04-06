#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    int *arr = NULL;
    int prev_size = 0;

    while (t--)
    {
        int n, x;
        scanf("%d%d", &n, &x);
        if (n != prev_size)
        {
            arr = (int *)realloc(arr, sizeof(int) * n);
            if (arr == NULL)
            {
                printf("Memory allocation failed\n");
                return 1;
            }
            prev_size = n;
        }

        for (int i = 0; i < n; i++)
            scanf("%d", arr + i);

        if (x > n)
        {
            printf("YES\n");
            continue;
        }
        int found = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                found = 1;
                for (int j = i; j < i + x && j < n; j++)
                    arr[j] = 0;
                break;
            }
        }


        int ok = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                ok = 0;
                break;
            }
        }

        printf(ok ? "YES\n" : "NO\n");
    }

    free(arr);
    return 0;
}
