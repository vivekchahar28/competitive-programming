#include<stdio.h>
#define max(a,b) a>b?a:b
long long mat[101][101];
long long path[101][101],n,m;
long long dp(long long i,long long j)
{
    if(i<0||j<0||i>n||j>m)return -1;
    if(path[i][j]!=-1)
        return path[i][j];
    long long a=mat[i+1][j+1]+dp(i+1,j+1);
    long long b=mat[i+1][j]+dp(i+1,j);
    long long c=mat[i+1][j-1]+dp(i+1,j-1);
    path[i][j]= max(max(a,b),c);
    return path[i][j];
}

main()
{
long long t;
scanf("%lld",&t);
    while(t--)
    {

       scanf("%lld %lld",&n,&m);
        long long i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%lld",&mat[i][j]);
              path[i][j]=(i==(n-1)?mat[i][j]:-1);
        }
    }

    long long val=0;
    for(i=0;i<m;i++)
        val=max(val,dp(0,i));
/*
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    cout<<path[i][j]<<" ";
    cout<<endl;
}*/
printf("%lld\n",val);
}
return 0;
}
