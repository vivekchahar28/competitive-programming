#include<bits/stdc++.h>
using namespace std;
#define ll int
main()
{
    ll a[4000],b[4000],c[4000],d[4000],n,i,j;
    cin>>n;
    assert(n<=4000);
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    vector<int> ar;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ar.push_back(a[i]+b[j]);
        }
    }
    sort(ar.begin(),ar.end());
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int val=-(c[i]+d[j]);
            count+=upper_bound(ar.begin(),ar.end(),val)-lower_bound(ar.begin(),ar.end(),val);

        }
    }

    cout<<count<<endl;
}
