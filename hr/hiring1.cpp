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
    L t,i;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
        vector<L> a(26,0);

        for(i=0;s[i];i++)
        {


                a[s[i]-'a']=1;

        }
        bool flag=0;
        for(i=0;s1[i];i++)
        {

                if(a[s1[i]-'a']==1)
                {
                    flag=1;
                    break;
                }

        }
        if(flag)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
