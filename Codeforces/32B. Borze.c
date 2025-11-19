#include<stdio.h>
#include<string.h>
int main()
{
    char str[201],ter[201];
    scanf("%s",str);
    int j,len=strlen(str);
    for(int i=0; str[i]!=0;)
    {
        if(str[i]=='.')
        {
            if(i==0)
            {
                j=i;
                ter[j]='0';
            }
            else
            {
                ter[++j]='0';
            }
            i++;
        }
        else if(str[i]=='-' && str[i+1]=='.')
        {
            if(i==0)
            {
                j=i;
                ter[j]='1';
            }
            else
            {
                ter[++j]='1';
            }
            i+=2;
        }
        else if(str[i]=='-' && str[i+1]=='-')
        {
            if(i==0)
            {
                j=i;
                ter[j]='2';
            }
            else
            {
                ter[++j]='2';
            }
            i+=2;
        }
        if(i>len-1)break;
    }
     ter[++j]='\0';
     printf("%s",ter);

    return 0;
}

