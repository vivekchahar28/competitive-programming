#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int tree[400000];
void build(int idx,int ss,int se)
{
if(ss==se)
{
    tree[idx]=arr[ss];
    return;
}
int mid=(ss+se)/2;
build( 2*idx+1,ss,mid);
build(2*idx+2,mid+1,se);
tree[idx]=max(tree[2*idx+1],tree[2*idx+2]);
}
int querry(int idx,int ss,int se,int l,int r)
{
if(ss>r||se<l)return INT_MIN;
if(l<=ss&&r>=se)return tree[idx];
int mid=(ss+se)/2;
return max((querry(2*idx+1,ss,mid,l,r)),(querry(2*idx+2,mid+1,se,l,r)));
}
main()
{
int n,i,x,y,m;
cin>>n;
for(i=0;i<n;i++)
cin>>arr[i];
build(0,0,n-1);
cin>>m;
while(m--)
{cin>>x>>y;
cout<<querry(0,0,n-1,x-1,y-1)<<endl;
}
}
