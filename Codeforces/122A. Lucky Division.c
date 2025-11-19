#include<stdio.h>
int main()
{
    int n,count=1,index=-1;
    scanf("%d",&n);
    int arr[1000];
    for(int i=1; i<=1000; i++)
    {
        count=1;
        for(int j=i; j>0; j/=10)
        {
            int k=j%10;
            if(k==4 || k==7) {}
            else
            {
                count=0;
                break;
            }
        }
        if(count!=0)
        {
            index++;
            arr[index]=i;
        }
    }
    for(int i=0; i<=index; i++)
    {
        if(n%arr[i]==0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
