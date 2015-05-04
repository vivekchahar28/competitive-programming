#include<bits/stdc++.h>
using namespace std;
long long arr[1000000];
#define MAX 1000000
vector<long long> prime;
  long long i,j;
void seive()
{
    arr[0]=arr[1]=1;
    for(i=3;i<MAX;i+=2)
       if(!arr[i])
       {
        long long j;
        for(j=1LL*i*i;j<MAX;j+=(i+i))
            arr[j]=1;
       }
        prime.push_back(2);
        for(i=3;i<MAX;i+=2)
            if(!arr[i])
        prime.push_back(i);
}
    long long t,n,m,v[1000000];

main()
{
    seive();
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
            n=2;
        for(i=0;i<m-n;i++)
            v[i]=0;
        for(i=0;prime[i]*prime[i]<=m;i++)
        {
            int temp=n/prime[i];
            if(temp==1)
                {
                for(j=2*prime[i];j<=m;j+=prime[i])
            {
                v[j-n]=1;
            }

                }
                else if(n%prime[i]==0)
               {
                   for(j=n;j<=m;j+=prime[i])
                {
                    v[j-n]=1;
                }
               }

                else{
                        if(temp==0)temp=prime[i];
                        else temp=temp*prime[i];
                    for(j=temp+prime[i];j<=m;j+=prime[i])
                {
                    v[j-n]=1;
                }
                }
        }
        int counter=0;
        for(i=0;i<=m-n;i++)
            if(v[i]==0)
            cout<<n+i<<endl;
            cout<<endl;
    }

}
