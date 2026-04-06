#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[102];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    if(strlen(str)>100 || strlen(str)<1)return 0;
    for(int i=0; i<strlen(str); i++)
    {
        if(!islower(str[i]))return 0;
    }
    int count=0;

    for(int i=0; i<strlen(str); i++)
    {
        int inner_count=0;

        for(int j=i-1; j>=0; j--)
        {
            if(str[i]==str[j])
            {
                inner_count++;
            }
        }
        if(inner_count==0)count++;

    }
    if(count%2==0)printf("CHAT WITH HER!");
    else printf("IGNORE HIM!");

    return 0;
}

