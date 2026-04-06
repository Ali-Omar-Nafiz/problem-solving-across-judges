#include<stdio.h>
#include<math.h>
#define sqr(y,z) (pow(y,2)+2*y*z+pow(z,2))
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        int year;
        scanf("%d",&year);
        int count=0;
        for(int i=0; i<100; i++)
        {
            for(int j=0; j<100; j++)
            {
                if(sqr(i,j)==year)
                {
                    printf("%d %d\n",i,j);
                    count++;
                    break;
                }
            }
            if(count)break;
        }
        if(count==0)printf("-1\n");
        n--;
    }
    return 0;
}
