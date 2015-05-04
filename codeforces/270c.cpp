#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB(n) push_back(n)
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
bool lx_gr(string s,string st)
{
    if(st<s)
    {
        return 1;
    }
    else return 0;
}
main()
{
    L t,n,arr[100004],i;
    cin>>n;
    vector<string> a;
    vector<string> b;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        a.PB(s);
        s.clear();
        cin>>s;
        b.PB(s);
    }
    FOR(i,n)
    {
        cin>>arr[i];
        arr[i]--;
    }
    bool flag=0;
    string s=a[arr[1]]<b[arr[1]]?a[arr[1]]:b[arr[1]];
    for(i=2;i<=n;i++)
    {
        if( s>a[arr[i]]&&s>b[arr[i]])
            {
                flag=1;
                break;
           }
           else if(s>b[arr[i]]&&s<a[arr[i]])
           {
               s=a[arr[i]];
           }
           else if(s>a[arr[i]]&&s<b[arr[i]])
           {
               s=b[arr[i]];
           }
           else s=a[arr[i]]<b[arr[i]]?a[arr[i]]:b[arr[i]];
    }
if(flag)
    cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
