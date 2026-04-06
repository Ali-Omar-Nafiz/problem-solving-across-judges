#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101],str3[101];
    scanf("%s",str1);
    scanf("%s",str2);
    for(int i=0; str1[i]!='\0'; i++)
    {
        if(str1[i]==str2[i])str3[i]='0';
        else str3[i]='1';
    }
    str3[strlen(str1)]='\0';
    printf("%s",str3);
    return 0;
}
