#include<bits/stdc++.h>
using namespace std;
#define L long long
main()
{
    L t,n,sum=0,x,y;
    cin>>t;
    vector<pair<L,pair<L,L> > >v;
    while(t--)
    {
        L z=7;
        while(z--)
        {
        cin>>n;
        sum+=n;
        while(n--)
        {
            cin>>x>>y;
            v.push_back({y-x,{x,y}});
        }
        }
    }
    sort(v.begin(),v.end());
    L req=ceil(sum*3.0/4.0),time=0;

  //  cout<<req<<endl;
    for(int i=0;i<req;i++)
    {
        time+=v[i].first;
        //cout<<v[i].second.first<<" "<<v[i].second.second<<endl;
    }

    cout<<7*24*60*60LL-time<<endl;
}
