#include<bits/stdc++.h>
using namespace std;
#define L long long
#define F first
#define S second
#define MOD 1000000009
#define s(n) scanf("%lld",&n)
main()
{
    std::ios::sync_with_stdio(false);
    L t,n,m,i,y;
    char x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1];
        for(i=1;i<=n;i++)
            a[i]=0;
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            a[y]=x-'A'+1;
        }
        bool flag=1;
        int lastx,lasty;
        L count=1;
        for(i=1;i<=n;i++)
        {
            if(a[i]!=0&&flag)
            {
                lastx=a[i];
                lasty=i;
                flag=0;
            }
            else if(a[i]!=0&&a[i]!=lastx)
            {
                count=(count*(i-lasty))%MOD;
                lastx=a[i];
                lasty=i;
            }
            else if(a[i]==lastx)
            {
                lasty=i;
            }
        }

    cout<<count<<endl;
    }
    return 0;
}
