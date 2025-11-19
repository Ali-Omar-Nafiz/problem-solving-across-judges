#include<stdio.h>
int main()
{
    int arr1[5];
    for(int i=0; i<5; i++)scanf("%d",&arr1[i]);
    int count=0;
    for(int i=1; i<=arr1[4]; i++)
    {
        if((i%arr1[0]==0&& i%arr1[1]<arr1[4])||
                (i%arr1[1]==0&& i%arr1[1]<arr1[4])||
                (i%arr1[2]==0&& i%arr1[2]<arr1[4])||
                (i%arr1[3]==0&& i%arr1[3]<arr1[4]))count++;
    }
    printf("%d",count);
    return 0;
}
