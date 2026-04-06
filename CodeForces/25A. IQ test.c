#include<stdio.h>
int main()
{
    int n,evencount=0,oddcount=0,even,odd;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            evencount++;
            even=i;
        }
        else
        {
            oddcount++;
            odd=i;

        }
    }
    if(evencount<oddcount)printf("%d",even);
    else printf("%d",odd);
    return 0;
}
