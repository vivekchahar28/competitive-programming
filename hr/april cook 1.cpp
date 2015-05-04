#include<bits/stdc++.h>
using namespace std;
#define L int
main()
{
    L t,m,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        vector<L> a(n+1,0);
        vector<L> b(n+1,0);
        for(i=0;i<m;i++)
        {
            L x;
            cin>>x;
            a[x]=1;
        }
        for(i=0;i<k;i++)
        {
            L x;
            cin>>x;
            b[x]=1;
        }
        L c=0,c1=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]&&b[i])
                c++;
                else if(!a[i]&&!b[i])
                    c1++;
        }
        cout<<c<<" "<<c1<<endl;

    }
}
