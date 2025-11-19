#include<stdio.h>
int main()
{
    int mat[5][5],m,n;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1)
            {
                m=i+1;
                n=j+1;
            }
        }
    }
    if(m<3 && n<3)printf("%d",(3-m)+(3-n));
    else if(m<3)printf("%d",(3-m)+(n-3));
    else if(n<3)printf("%d",(m-3)+(3-n));
    else printf("%d",(n-3)+(m-3));


    return 0;
}
