#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char input[101];
    scanf("%s",input);
    int lowercount=0,uppercount=0,len=strlen(input);
    for(int i=0; input[i]!='\0'; i++)
    {
        if(islower(input[i]))lowercount++;
        else uppercount++;
    }
    if(uppercount>lowercount)
    {
        strupr(input);
        printf("%s",input);
    }
    else
    {
        strlwr(input);
        printf("%s",input);
    }
    return 0;
}
