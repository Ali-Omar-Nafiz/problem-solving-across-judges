#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int s[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
        sum=sum+s[i];
    }
    float result=(float)sum/n;
    printf("%f\n",result);
    return 0;
}
