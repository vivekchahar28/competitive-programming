#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
main()
{
    std::ios::sync_with_stdio(false);
    L t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        L j=n-1,i;
        L sum=0;
        for(i=n;i>=1;i-=2)
        {
            sum+=i*2*(n-j);
            cout<<sum<<endl;
            j--;
        }
        double x=sum,y=n;;

        printf("%.6lf\n",x/y);
    }
}

