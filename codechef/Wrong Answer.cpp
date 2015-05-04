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
        int T;
        cin>>T;
        while(T--)
        {
            string N,M;
            cin>>N>>M;
            sort(N.begin(),N.end());
            if(N[0]!='0')
            {
                if(N==M)
                    cout<<"AC"<<endl;
                else cout<<"WA"<<endl;
            }else
            {int i;
               for( i=0;i<N.size();i++){
                if(N[i]!='0')
                    break;
               }
               N[0]=N[i];
               N[i]='0';
                if(N==M)

                    cout<<"AC"<<endl;
                else cout<<"WA"<<endl;
            }



        }
}

