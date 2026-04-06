#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    while (t--)
    {
        char str[1000];
        do
        {
            fgets(str, sizeof(str), stdin);
        }
        while (str[0] == '\n');
        str[strcspn(str, "\n")] = '\0';
        if (str[0] != '\0')
        {
            printf("%c", str[0]);
        }
        for (int i = 1; str[i] != '\0'; i++)
        {
            if (str[i - 1] == ' ' && str[i] != ' ')
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
