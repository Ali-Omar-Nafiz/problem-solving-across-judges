#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1002];
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1]=='\n')str[strlen(str)-1]='\0';
    if(strlen(str)<1 || strlen(str)>1000)return 0;
    str[0]=toupper(str[0]);
    printf("%s",str);
    return 0;
}
