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
    long long t,n,m,x,y,k,i,length;
    char s[2000];
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
length=0;
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
                length+=p[i].F;
            Union(p[i].S.F,p[i].S.S);
        }
    }
cout<<length<<endl;
}
return 0;
}
