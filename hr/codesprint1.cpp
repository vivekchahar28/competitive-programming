#include<bits/stdc++.h>
using namespace std;
#define L long long
#define mp(n,m) make_pair(n,m)
#define F first
#define S second
L t,n,i,x,a[1000000],sum=0;
int main()
{
    stack<pair<L,L> > pos;
    stack<pair<L,L> > neg;
        cin>>n;
        for(i=1;i<=n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }
            sum=sum/n;
            for(i=1;i<=n;i++)
            {
            x=sum-a[i];
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

