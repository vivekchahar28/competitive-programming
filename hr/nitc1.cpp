#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
main()
{
    std::ios::sync_with_stdio(false);
    L t,n,i;
    cin>>n>>t;
    L a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        t-=a[i];
        if(t<0)
            break;
    }
    cout<<i<<endl;
}
