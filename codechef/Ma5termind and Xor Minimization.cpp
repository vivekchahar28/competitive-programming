#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
int subset[100001][101];
void isSubsetSum(int set[], int n, int sum)
{
    for (int i = 0; i <= n; i++)
      subset[0][i] = 1;
    for (int i = 1; i <= sum; i++)
      subset[i][0] = 0;

     for (int i = 1; i <= sum; i++)
     {
       for (int j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] + subset[i - set[j-1]][j-1];
       }
     }
}
main()
{
int n ,a[1004],q,x,i;
sd(n);
for(i=0;i<n;i++)
    sd(a[i]);
isSubsetSum(a,n,n*450);
sd(q);
while(q--)
{
    cin>>x;
    int c=0,minv=INT_MAX,m;
    for(i=1;i<=x;i++)
    {
        if(subset[i][n]>=1)
        {
            if((i^x)<minv)
            {
            c=subset[i][n];
            minv=i^x;
            m=i;
            }
            else if((i^x)==minv)
                {
                    c+=subset[i][n];
                    m=1;
                }
        }
    }
    cout<<m<<" "<<c<<endl;
}
}
