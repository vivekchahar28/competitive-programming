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
    L a,b;
    cin>>a;
    b=a;
    L c=0;
    L sum=0;
    L flag=0;
    while(b)
    {
      c++;
      if((b%10)==7)
        {
            if(c==1)
                sum+=2;
            else sum+=pow(2,c-1);
            //cout<<"a";
        }
    else if(c==1)
    {
        sum+=pow(1,c);
        //cout<<"d";
    }
      b/=10;

    }

    //cout<<sum<<" "<<c;
     L val=(pow(2,c)-2);
    cout<<sum+val<<endl;
}
