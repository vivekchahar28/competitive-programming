#include<bits/stdc++.h>
using namespace std;
#define L long long
main()
{
    L t,n,m,x,i;
    vector<L> v;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n>>m;
        while(m--)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        L f=v[0],l=v[v.size()-1];
      //  cout<<f<<" "<<l;
        for(i=0;i<n;i++)
        {
        //    cout<<abs(i-f)<< " "<<abs(i-l)<<endl;
            cout<<max(abs(i-f),abs(i-l))<<" ";
        }
        cout<<endl;
    }


}
