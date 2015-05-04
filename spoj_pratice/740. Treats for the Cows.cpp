#include<bits/stdc++.h>
using namespace std;
#define L long long
L arr[100000];
L maper[3000][3000];
map<pair<L,L>,L> m;
L ans(L left,L right,int idx)
{
    pair<L,L> p;
    p.first=left;
    p.second=right;
    if(maper[left][right]!=0)return maper[left][right];
    if(left>right)
        return INT_MIN;
    if(left==right )
        {
            maper[left][right]= arr[left]*idx;
            return arr[left]*idx;
        }
    L val=(max(arr[left]*idx+ans(left+1,right,idx+1),ans(left,right-1,idx+1)+arr[right]*idx));
            maper[left][right]= val;
            return val;
}
main()
{
     std::ios::sync_with_stdio(false);
    L n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<ans(0,n-1,1)<<endl;
}
