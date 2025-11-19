#include<stdio.h>
#include<string.h>
int main()
{
    char str1[105],str2[105];
    fgets(str1,sizeof(str1),stdin);
    str1[strlen(str1)-1]='\0';
    if(strlen(str1)<1 || strlen(str1)>100)return 0;
    fgets(str2,sizeof(str2),stdin);
    str2[strlen(str2)-1]='\0';
    if(strlen(str2)<1 || strlen(str2)>100)return 0;
    strlwr(str1);
    strlwr(str2);
    if(strcmp(str1,str2)==0)printf("0");
    else
    {

        for(int i=0; i<strlen(str1); i++)
        {
            if(str1[i]>str2[i])
            {
                printf("1");
                return 0;
            }
            else if(str1[i]<str2[i])
            {
                printf("-1");
                return 0;
            }
        }

    }


    return 0;
}
