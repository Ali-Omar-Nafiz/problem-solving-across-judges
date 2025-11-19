#include<stdio.h>

int main()
{
    int n,k=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            k++;
        }
        if(a[i]<min)
        {
            min=a[i];
            k++;
        }
    }
    printf("%d",k);

    return 0;
}
