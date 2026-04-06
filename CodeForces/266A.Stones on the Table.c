#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    getchar();
    if((n<1)||(n>50))return 0;
    char str[n+2];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(int i=0; i<n;)
    {

        if(i<(n-1))
        {
            for(int j=i+1; j<n; j++)
            {
                if(str[i]!=str[j])
                {
                    i=j;
                    break;
                }
                count++;
                i++;
            }
        }
        else if(i==(n-1))break;
    }
    printf("%d",count);
    return 0;
}
