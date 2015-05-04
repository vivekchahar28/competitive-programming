#define first F
#define second S
#include<iostream>
using namespace std;
main()
{
    long long t,n,m,x,y;
    pair<long long,pair<long long,long long> > p[10007];
    char s[200];
    cin>>t;
    while(t--)
    {k=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>s;
            cin>>m;
            while(m--)
            {
                cin>>x>>y;
                p[k].F=y;
                p[k].S.F=i;
                p[k++].S.S=x;
            }
        }

        sort(p,p+k)
    }

}
