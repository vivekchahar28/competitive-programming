#include<bits/stdc++.h>
using namespace std;
#define PB push_back
#define F first
#define S second
#define M 1000005
bool arr[M];
vector<int> prime;
vector<vector<long long> > p(M);
  int i,j;
void seive()
{
    arr[0]=arr[1]=1;
    for(i=2;i<M;i+=1)
       if(!arr[i])
       {
           p[i].PB(i);
        long long int j;
        for(j=2*i;j<M;j+=(i))
           {
            arr[j]=1;
            p[j].PB(i);
           }
       }
}
long t,n,h[M],x,k;
main()
{
    seive();
    cin>>t;
    while(t--)
    {
        for(i=0;i<M;i++)
            h[i]=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            long long xx=x;
            for(j=0;j<p[xx].size();j++)
            {
                long co=0;
                while((x%p[xx][j])==0)
                {
                    x=x/p[xx][j];
                    co++;
                }
                h[p[xx][j]]=max(h[p[xx][j]],co);
            }
    }
    long long c=0;
    for(i=0;i<M;i++)
        c+=h[i];
        cout<<c<<endl;
    }
}
