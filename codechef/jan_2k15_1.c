#include<bits/stdc++.h>
using namespace std;

#define L long long

main()
{
    L n,k,t;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    L arr[n];
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    L u_max=INT_MIN;
    for(i=0;i<n;i++)
        {
        L x,y;
        cin>>x;
        y=k/arr[i];
        u_max=max(u_max,x*y);
        }
        cout<<u_max<<endl;
    }



}
