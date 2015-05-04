#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define sld(n) scanf("%lld",&n)
#define PB() push_back()
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long long
#define mp(n,m) make_pair(n,m)


main()
{
    std::ios::sync_with_stdio(false);
    L n,q,i;
    cin>>n>>q;
    vector<L> a(n+1);
    vector<L> b(n+1);
    for(i=1;i<=n;i++)
    {

        cin>>a[i];

    }
    for(i=1;i<=n;i++)
    {

        cin>>b[i];

    }

    vector<L> sum(n+1,0);
    vector<L> sum1(n+1,0);

    for(i=1;i<=n;i++)
    {
        if(i%2){
                sum[i]=sum[i-1]+a[i];
        sum1[i]=sum1[i-1];
        }
        else
        {
            sum1[i]=sum1[i-1]+a[i];
            sum[i]=sum[i-1];
        }
    }
    vector<L> sum2(n+1,0);
    vector<L> sum3(n+1,0);

    for(i=1;i<=n;i++)
    {
        if(i%2){
                sum2[i]=sum2[i-1]+b[i];
                sum3[i]=sum3[i-1];
        }
        else
        {
            sum3[i]=sum3[i-1]+b[i];
            sum2[i]=sum2[i-1];
        }
    }
    /*for(i=1;i<=n;i++)
    {
        cout<<sum[i]<<" ";

    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<sum3[i]<<" ";

    }*/

    while(q--)
    {
        L x,y,z;
        cin>>x>>y>>z;
        if(x==1)
        {
            if(y%2)
            cout<<sum[z]-sum[y-1]+sum3[z]-sum3[y-1]<<endl;
            else
                cout<<sum1[z]-sum1[y-1]+sum2[z]-sum2[y-1]<<endl;

        }
        else if(x==2)
        {
            if(y%2)
            cout<<sum1[z]-sum1[y-1]+sum2[z]-sum2[y-1]<<endl;
            else
                cout<<sum[z]-sum[y-1]+sum3[z]-sum3[y-1]<<endl;
        }
    }
}
