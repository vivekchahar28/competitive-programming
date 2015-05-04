#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
main()
{
    L t,n,a[3000],k,i;
    cin>>n>>k;
    FOR(i,n)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    L sum=0;
    for(i=n;i>=1;)
    {
        sum+=(a[i]-1)*2;
        L k1=k;
        while(k1>0&&i>0)
        {
            i--;
            k1--;
        }
    }
    cout<<sum<<endl;
}
