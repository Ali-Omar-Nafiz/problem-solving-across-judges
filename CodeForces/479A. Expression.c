#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int arr[5];
    arr[0]=a+b+c;
    arr[1]=a*b*c;
    arr[2]=(a+b)*c;
    arr[3]=a+(b*c);
    arr[4]=a*(b+c);
    arr[5]=(a*b)+c;
    int max=arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
