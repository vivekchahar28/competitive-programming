#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define sld(n) scanf("%lld",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L  long long
#define mp(n,m) make_pair(n,m)


main()
{
    std::ios::sync_with_stdio(false);
    L a;
    cin>>a;
    string s[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
        string ss[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(a<=20)
    {
        cout<<s[a];
    }
    else
    {
        L aa=a%10;
        L bb=a/10;
        cout<<ss[bb-2];
        if(aa)
        {
            cout<<"-"<<s[aa]<<endl;
        }
}    }
