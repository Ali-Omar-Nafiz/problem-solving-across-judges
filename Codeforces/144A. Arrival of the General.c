#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[1];
    int max_index=1;
    int min=arr[n];
    int min_index=n;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            min_index=i;
        }
    }
    if(max_index==1 && min_index==n)printf("0");
    else if(min_index>max_index)
    {
        printf("%d",((max_index-1)+(n-min_index)));
    }
    else
    {
        printf("%d",((max_index-1)+(n-min_index)-1));
    }
    return 0;
}
