#include <stdio.h>
#include<string.h>
int main()
{
    int n,count=0;
    char c[5];
    scanf("%d",&n);
    if(n<1 || n>150) return 0;
    for(int i=0; i<n; i++)
    {
        scanf(" %[^\n]s",c);
        if(strcmp(c,"X++")==0 || strcmp(c,"X--")==0|| strcmp(c,"++X")==0 || strcmp(c,"--X")==0)
        {
            if(strcmp(c,"X++")==0 || strcmp(c,"++X")==0)count++;
            else count--;
        }
        else return 0;
    }
    printf("%d",count);
    return 0;
}
