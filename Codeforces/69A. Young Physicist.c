#include<stdio.h>
int main()
{
    int n,x=0,y=0,z=0;
    scanf("%d",&n);
    int c[n][3];
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<3; j++)
        {
            scanf("%d",&c[i][j]);
            if(j==0)x+=c[i][0];
            if(j==1)y+=c[i][1];
            if(j==2)x+=c[i][2];
        }
    }
    if(x==0 && y==0 && z==0)printf("YES");
    else printf("NO");
    return 0;
}
