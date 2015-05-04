#include<bits/stdc++.h>
using namespace std;
#define L long long
main()
{
    L t,n,a[1000],i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        string odd,even;
        L l=s.length();
        for(i=0;i<l;i++)
        {
            if((s[i]-'0')%2)
                odd+=s[i];
            else even+=s[i];
        }
        cout<<even<<odd<<endl;
    }

}
