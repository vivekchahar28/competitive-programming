#include<bits/stdc++.h>
using namespace std;
#define L long long
L tree[1000002];
L n,k,a[1000002],i;
void maketree(L a[])
{
    for(L i=1;i<=n;i++)
    {
        L add=a[i],j=i;
        while(j<=n)
        {
            tree[j]=tree[j]+add;
            j=j+(j&(-j));
        }
    }
}
void updatetree(L i,L value)
{
    L j=i;
    while(j<=n)
    {
        tree[j]=tree[j]+value;
        j=j+(j&(-j));
    }
}
L querytree(L i)
{
    L j=i,sum=0;
    while(j>0)
    {
        sum+=tree[j];
        j=j-(j&(-j));
    }
    return sum;
}
main()
{
    std::ios::sync_with_stdio(false);
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    maketree(a);
    while(k--)
    {
        char ch;
        L a,b;
        cin>>ch>>a>>b;
        if(ch=='S')
        {
            cout<<querytree(b+1)-querytree(a)<<endl;
        }
        else if(ch=='G')
        {
            updatetree(a+1,b);
        }
        else
        {
            updatetree(a+1,-b);
        }
    }
}
