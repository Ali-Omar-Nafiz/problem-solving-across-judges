#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);

    while(1)
    {
        y++;
        char str[1000];
        sprintf(str, "%d", y);
        int count=0;
        for(int i=0; str[i]!='\0'; i++)
        {
            for(int j=i+1; str[j]!='\0'; j++)
            {
                if(str[i]==str[j])
                {
                    count=1;
                    break;
                }
            }
            if(count)break;
        }
        if(!count)
        {
            printf("%s",str);
            break;
        }

    }
    return 0;
}
