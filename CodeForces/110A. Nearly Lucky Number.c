#include<stdio.h>
#define MAX 1000
int main()
{
    int count=0;
    char str[MAX];
    scanf("%s",str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='4'|| str[i]=='7')count++;
    }
    if(count<4)
    {
        printf("NO");
        return 0;
    }
    for(int i=count; i>0; i/=10)
    {
        if(i==4 || i==7)continue;
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
