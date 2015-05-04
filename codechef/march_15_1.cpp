#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define sld(n) scanf("%lld",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L  long long
#define mp(n,m) make_pair(n,m)



main()
{
    std::ios::sync_with_stdio(false);
    L x,y,t,k,n,i;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k>>n;
        x-=y;
        bool flag=0;
        for(i=0;i<n;i++)
        {
            L a,b;
            cin>>a>>b;
            if(x<=a&&b<=k)
                flag=1;
        }
        if(flag)
            cout<<"LuckyChef"<<endl;
        else cout<<"UnluckyChef"<<endl;

    }
}
