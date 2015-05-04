#define first F
#define second S
#include<algorithm>
#include<iostream>
using namespace std;
 pair<long long,pair<long long,long long> > p[1000007];
    pair<long long,long long> parent_rank[100007];
long long find(long long i)
{
      if (parent_rank[i].F != i)
        parent_rank[i].F = find( parent_rank[i].F);

    return parent_rank[i].F;
}
void Union( long long x, long long y)
{
    int xroot = find( x);
    int yroot = find( y);

    if (parent_rank[xroot].S < parent_rank[yroot].S)
        parent_rank[xroot].F = yroot;
    else if (parent_rank[xroot].S > parent_rank[yroot].S)
        parent_rank[yroot].F = xroot;

    else
    {
        parent_rank[yroot].F = xroot;
        parent_rank[xroot].S++;
    }
}

main()
{
    long long t,n,m,x,y,k,i,f,var;
        cin>>n>>m;
        k=0;
        for(i=1;i<=m;i++)
        {
                cin>>x>>y;
                p[k].F=0;
                p[k].S.F=x;
                p[k++].S.S=y;
            }
        f=0;
        var=n;
        sort(p,p+k);
        for(i=0;i<=100000;i++){parent_rank[i].F=i;
        parent_rank[i].S=0;
        }
        for(i=0;i<k;i++)
        {
            long long x1=find(p[i].S.F);
            long long x2=find(p[i].S.S);
            if(x1!=x2)
            {
              var--;
            Union(p[i].S.F,p[i].S.S);
        }
        else {f=1;break;}
    }
if(f)cout<<"NO"<<endl;
else
{if(var!=1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}
