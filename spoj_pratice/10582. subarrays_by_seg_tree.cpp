#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
#define mp(n,m) make_pair(n,m)
L arr[1000000],tree[4000000];
void build(L ss,L se,L idx)
{
    if(ss>se)
        return;
    if(ss==se)
        {
            tree[idx]=arr[ss];
            return ;
        }
        L mid=(ss+se)/2;
    build(ss,mid,2*idx+1);
    build(mid+1,se,2*idx+2);
    tree[idx]=max(tree[2*idx+1],tree[2*idx+2]);
}
L ans(L ss,L se,L idx,L left,L right)
{
    if(ss>se||left>se||right<ss)
        return INT_MIN;
        if(ss>=left&&se<=right)
            return tree[idx];
        L mid=(ss+se)/2;
        if(right<=mid)
            return ans(ss,mid,2*idx+1,left,right);
         if(left>mid)
            return ans(mid+1,se,2*idx+2,left,right);

    return max(ans(ss,mid,2*idx+1,left,right),ans(mid+1,se,2*idx+2,left,right));
}
main()
{
     std::ios::sync_with_stdio(false);
    L n,i,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    build(0,n-1,0);
    cin>>k;
    for(i=0;i+k-1<n;i++)
    {
        cout<<ans(0,n-1,0,i,i+k-1)<<" ";
    }
}
