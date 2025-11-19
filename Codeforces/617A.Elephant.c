#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    if((n<1) || (n>1000000))return 0;
    while(1)
    {
        if((n%5)<n)
        {
            count=count+(n/5);
            n=n%5;
            continue;
        }
        else if(n%4<n)
        {
            count=count+(n/4);
            n=n%4;
            continue;
        }
        else if(n%3<n)
        {
            count=count+(n/3);
            n=n%3;
            continue;
        }
        else if(n%2<n)
        {
            count=count+(n/2);
            n=n%2;
            continue;
        }
        else if(n%1<n)
        {
            count=count+(n/1);
            n=n%1;
            continue;
        }
        else break;
    }
    printf("%d",count);
    return 0;

}
