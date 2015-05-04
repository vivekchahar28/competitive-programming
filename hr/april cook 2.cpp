#include<bits/stdc++.h>
using namespace std;
#define L long long
main()
{
    L t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        L s=0,x;
        L a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        s=s/(n-1);
        for(i=0;i<n;i++)
        {
            cout<<s-a[i]<<" ";
        }
        cout<<endl;

    }
}
