#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L int
#define mp(n,m) make_pair(n,m)
L n,M ,val[100000],w[1000000],t,i,j;
main()
{
cin>>t;
while(t--)
{
    L a,b;
    cin>>a>>b;
    M=b-a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>val[i]>>w[i];
    }
    L ans[M+1];
    ans[0]=0;
    L best=-1;
    for(i=1;i<=M;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=w[j])
            best=max(ans[i-w[j]]+val[j],best);
        }
        ans[i]=best;
    }
    for( i=1;i<=M;i++)
        cout<<ans[i]<<" ";
cout<<ans[M]<<endl;
}

}
