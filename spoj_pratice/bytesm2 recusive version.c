#include<stdio.h>
#define max(a,b) a>b?a:b
int mat[1000][1000];
int path[1000][1000],n,m;
int dp(int i,int j)
{
    if(i<1||j<1||i>(n+1)||j>(m+1))return 0;
    if(path[i][j]!=-1)
        return path[i][j];
    int a=path[i+1][j+1]=dp(i+1,j+1);
    int b=path[i+1][j]=(dp(i+1,j));
    int c=path[i+1][j-1]=dp(i+1,j-1);
    path[i][j]= max(max(a,b),c);
    return mat[i][j]+path[i][j];
}

main()
{
int t;
scanf("%d",&t);
    while(t--)
    {
        int i,j;
       scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
for(i=1;i<206;i++)
    for(j=1;j<206;j++)
      path[i][j]=((i==n)?(mat[i][j]):(i<n?-1:0));
    int val=0,var1;
    for(j=1;j<=m;j++)
       {
           var1=dp(1,j);val=max(val,var1);
       }

       /*
 }*/
return 0;
}
}
