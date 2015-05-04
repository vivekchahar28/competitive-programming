#include<bits/stdc++.h>
using namespace std;
main()
{
    long long N,i;
    cin>>N;
    vector<long long> V(N,0),m(100008,0);

    for(i=0;i< N;i++)
    {
        cin>>V[i];
        m[V[i]]++;
    }
    long long F[100008];
    F[0]=0;
    F[1]=m[1];
    for(long long i=2;i<=1005;i++)
    {
       long long x=m[i]*i;
                F[i]=max(F[i-1],F[i-2]+x);
    }
    cout<<F[N]<<endl;
}



