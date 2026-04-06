#include<stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d%d",&a,&b);
   if((a<1)||(a>b)||(b>10))return 0;
    while(1)
    {
        a=a*3;
        b=b*2;
        count++;
        if(a>b)break;

    }
    printf("%d",count);
    return 0;
}
