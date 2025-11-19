#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr2[n],exit,enter,now=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&exit,&enter);
        now=now-exit+enter;
        arr2[i]=now;
    }
    int max=arr2[0];
    for(int i=0; i<n; i++)
    {
        if(arr2[i]>max)
        {
            max=arr2[i];
        }
    }
    printf("%d",max);
    return 0;

}
