#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    char str[n+1];
    scanf("%s",str);
    while(t)
    {
        for(int i=0; str[i]!='\0';)
        {
            if(str[i-1]=='B'&& str[i]=='G')
            {
                str[i-1]='G';
                str[i]='B';
                i+=2;
            }
            else i++;
        }
        t--;
    }
    printf("%s",str);
    return 0;

}
