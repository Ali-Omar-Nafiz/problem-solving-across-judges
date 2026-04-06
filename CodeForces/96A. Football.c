#include<stdio.h>
int main()
{
    char str[101];
    scanf("%s",str);
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
            if(count==6)
            {
                printf("YES");
                return 0;
            }
        }
        else
        {
            count=0;
        }

    }
    printf("NO");
    return 0;
}
