#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char c[1000];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf(" %[^\n]s",c);
        for(int k=0; c[k]!='\0'; k++)
        {
            if(c[k]<'a' || c[k] >'z') return 1;
        }
        if(strlen(c)<=100 && strlen(c)>=1)
        {
            if(strlen(c)<11)printf("%s\n",c);
            else
            {
                for(int j=0; j<=strlen(c); j++)
                {
                    if(j==0)
                    {
                        printf("%c%d",c[j],strlen(c)-2);
                    }
                    else if(j==strlen(c)-1)printf("%c\n",c[j]);
                }
            }
        }
        else return 1;


    }


    return 0;
}
