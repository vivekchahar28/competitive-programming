#include<bits/stdc++.h>
using namespace std;
#define L long long
struct node
{
  L totalval;
  L prefix;
  L suffix;
  L bestsum;
};

L arr[1000000];
node tree[4000000];

void build(L ss,L se,L idx)
{
    if(ss>se)
        return;
    if(ss==se)
    {
        tree[idx].totalval=arr[se];
        tree[idx].prefix=arr[se];
        tree[idx].suffix=arr[se];
        tree[idx].bestsum=arr[se];
        return;
    }

    L left=2*idx+1;
    L right=2*idx+2;

    L mid=(ss+se)/2;
    build(ss,mid,left);
    build(mid+1,se,right);

    tree[idx].totalval=tree[left].totalval+tree[right].totalval;

    tree[idx].prefix=max(tree[left].prefix,(tree[left].totalval+tree[right].prefix));

    tree[idx].suffix=max(tree[right].suffix,(tree[left].suffix+tree[right].totalval));

    tree[idx].bestsum=max(tree[left].bestsum,tree[right].bestsum);
    tree[idx].bestsum=max(tree[idx].bestsum,(tree[left].suffix+tree[right].prefix));
}

node query(L ss,L se,L idx,L l,L r)
{
    node temp;

    temp.bestsum=INT_MIN;
    temp.suffix=INT_MIN;
    temp.prefix=INT_MIN;
    temp.totalval=INT_MIN;

    if(ss>se||se<l||ss>r)
        return temp;
    if(ss>=l&&se<=r)
        return tree[idx];

        L mid=(ss+se)/2;

    node t=query(ss,mid,2*idx+1,l,r);
    node t1=query(mid+1,se,2*idx+2,l,r);
    node t2;
        t2.bestsum= max(  max(t.bestsum,t1.bestsum),t.suffix+t1.prefix);
        t2.prefix=max(t.prefix,t.totalval+t1.prefix);
        t2.suffix=max(t1.suffix,t.suffix+t1.totalval);
        t2.totalval=t.totalval+t1.totalval;
        return t2;
}

void update(L ss,L se,L idx,L value,L l,L r)
{
    if(ss>se||se<l||ss>r)
        return;

    if(ss>=l&&se<=r)
    {
        tree[idx].totalval=value;
        tree[idx].bestsum=value;
        tree[idx].prefix=value;
        tree[idx].suffix=value;
        return;
    }

    L mid=(se+ss)/2;

    update(ss,mid,2*idx+1,value,l,r);
    update(mid+1,se,2*idx+2,value,l,r);

    L left=2*idx+1;
    L right=2*idx+2;

    tree[idx].totalval=tree[left].totalval+tree[right].totalval;
    tree[idx].prefix=max(tree[left].prefix,(tree[left].totalval+tree[right].prefix));

    tree[idx].suffix=max(tree[right].suffix,(tree[left].suffix+tree[right].totalval));

    tree[idx].bestsum=max(tree[left].bestsum,tree[right].bestsum);
    tree[idx].bestsum=max(tree[idx].bestsum,(tree[left].suffix+tree[right].prefix));
}
main()
{
L n,i;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
    scanf("%lld",&arr[i]);
}
build(0,n-1,0);
L q;
scanf("%lld",&q);
while(q--)
{
    L l,r,type;
    scanf("%lld%lld%lld",&type,&l,&r);
    if(type==0)
        update(0,n-1,0,r,l-1,l-1);
    else {
            L var=query(0,n-1,0,l-1,r-1).bestsum;
    printf("%lld\n",var);
    }
}
}

