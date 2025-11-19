#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[102];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';

    for(int i=0; i<strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            int min=str[i];
            int index=i;
            for(int j=i+1; j<strlen(str); j++)
            {
                if(str[j]<min && isdigit(str[j]))
                {
                    min=str[j];
                    index=j;

                }
            }
            str[index]=str[i];
            str[i]=min;
        }
    }
    printf("%s",str);

    return 0;
}
