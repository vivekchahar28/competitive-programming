#include<bits/stdc++.h>
using namespace std;
#define L long long
#define mp(n,m) make_pair(n,m)
#define F first
#define S second
main()
{
    L t,n,i,x;
    cin>>t;
    stack<pair<L,L> > pos;
    stack<pair<L,L> > neg;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            {
                cin>>x;
                if(x>0)
                    pos.push(mp(x,i));
                else if(x<0)
                    neg.push(mp(-x,i));
            }
            L count=0,val;
            bool f=0,f1=0;
            pair<L,L> p,p1;
            while(!pos.empty()&&!neg.empty())
            {
                    p=pos.top();
                    p1=neg.top();

                    pos.pop();
                    neg.pop();

                    L value=min(p.F,p1.F);
                    count+=value*abs(p.S-p1.S);
                    val=abs(p.F-p1.F);

                    if(p.F>p1.F)
                    {
                         pos.push(mp(val,p.S));
                    }
                    else if(p.F<p1.F)
                    {
                         neg.push(mp(val,p1.S));
                    }
            }
                cout<<count<<endl;
            }
}
