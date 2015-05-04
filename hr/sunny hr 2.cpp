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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=0;i<n;i++)
        {
            idx=-1;
            min=INT_MAX;
            for(j=0;j<n;i++)
            {
                if(v[j]<min){

                    min=v[j];
                    idx=j;
                }
            }
            if(min!=INT_MAX)
            {
                flag=1;
                break;
            }
            else
            {

            }



        }
