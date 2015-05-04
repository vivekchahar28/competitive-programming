#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
vector<vector<L> > mapx(20000001);
bool fn(L p,L q,L r,L s)
{
   L x = p + s - q;
   L y = p + q - r;
   if(x<0||y<0)
    return 0;
   if(binary_search(mapx[x].begin(),mapx[x].end(),y))
   {
       return 1;
   }
   return 0;
}
bool fn1(L p,L q,L r,L s)
{
   L x = p + q - s;
   L y = r + q - p;
   if(x<0||y<0)
    return 0;
   if(binary_search(mapx[x].begin(),mapx[x].end(),y))
   {
       return 1;
   }
   return 0;
}
main()
{
    std::ios::sync_with_stdio(false);
    L n,i,j;
    pair<L,L> points[10000];
    cin>>n;
    for(i=0 ;i<n;i++)
    {
        cin>>points[i].F>>points[i].S;
        points[i].F+=1000000;
        points[i].S+=1000000;
    }
    sort(points,points+n);
    if(n==0)
    {
        cout<<4<<endl;
        return 0;
    }
    else if(n==1)
    {
        cout<<3<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        mapx[points[i].F].PB(points[i].S);
    }
    bool flag,flag1,flag2,flag3;
    int ans=2;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            flag=flag1=flag2=flag3=0;

            flag=fn(points[i].F,points[i].S,points[j].F,points[j].S);
            flag1=fn1(points[i].F,points[i].S,points[j].F,points[j].S);

            flag2=fn(points[j].F,points[j].S,points[i].F,points[i].S);
            flag3=fn1(points[j].F,points[j].S,points[i].F,points[i].S);
            if(flag==1&&flag3==1)
            {
                ans=min(ans,0);
                  //cout<<"A"<<points[i].F<<" "<<points[i].S<<" "<<points[j].F<<" "<<points[j].S<<endl;
            }

            else if(flag==1||flag3==1)
            {
                ans=min(ans,1);
            }
            if(flag1==1&&flag2==1)
            {
                ans=min(ans,0);
                //cout<<"B"<<points[i].F<<" "<<points[i].S<<" "<<points[j].F<<" "<<points[j].S<<endl;
            }
            else if(flag1==1||flag2==1)
            {
                ans=min(ans,1);

            }
        }
    }
    cout<<ans<<endl;

}
