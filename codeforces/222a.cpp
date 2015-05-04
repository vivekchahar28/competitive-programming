#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB(n) push_back(n)
#define F first
#define S second
long long t,n,i,x;

    vector<long long> v,v1;
    long long mark[100000],mark1[100000];
main()
{
      cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.PB(x);
        cin>>x;
        v1.PB(x);
    }
    long long j=0,k=0;
    while((k+j)<n)
    {
        if(v[j]<v1[k])
        {
            mark[j]=1;
            j++;
        }
        else
        {
            mark1[k]=1;
            k++;
        }
    }
   /* for(i=0;i<n;i++)
        cout<<mark[i];
        cout<<endl;
    for(i=0;i<n;i++)
        cout<<mark1[i];
        cout<<endl;*/
for(i=0;i<n;i++)
{
    if(mark[i]==1)
        cout<<mark[i];
    else
    {
        if(i<n/2)
        {
            cout<<1;
        }
        else cout<<0;
    }
}
cout<<endl;
for(i=0;i<n;i++)
{
    if(mark1[i]==1)
            cout<<1;
    else
    {
        if(i<n/2)
        {
            cout<<1;
        }
        else cout<<0;
    }
}
cout<<endl;
}





