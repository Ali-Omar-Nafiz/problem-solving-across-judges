
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int n;
        scanf("%d",&n);
        char str[1000];
        scanf("%s",str);
        int flag=n,count=0;
        while(flag)
        {
            for(int i=0; i<n; i++)
            {
                if(i==(flag-1))
                {
                    if(str[i]=='0')count++;
                }
                else
                {
                    if(str[i]=='1')count++;
                }

            }
            flag--;
        }
        printf("%d\n",count);

        t--;
    }
    return 0;
}
