#include<bits/stdc++.h>
using namespace std;
#define L long long

bool isinside(L a,L b,L c,L d)
{
    if(c>=a&&c<=b)
        return true;
    return false;
}

main()
{
    L t,n,x,y,i;
    vector<pair<L,L> > v;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
        L p=v[0].first,q=v[0].second,count=1;
        for(i=1;i<n;i++)
        {
            if(isinside(p,q,v[i].first,v[i].second))
            {
                p=max(p,v[i].first);
                q=min(q,v[i].second);
            }
            else
            {
                count++;
                p=v[i].first;
                q=v[i].second;
            }
        }
        cout<<count<<endl;
    }
}
