#include<bits/stdc++.h>
using namespace std;
main()
{
        std::ios::sync_with_stdio(false);
	long long
	 T,N,K,Cur,i,mod=1000000007;
	cin>>T>>N;
	vector<int> V(N+2,0);
	V[0]=1;
	for(i=1;i<=N;i++)
	{
		if(i>=2)
		{
			V[i]+=V[i-2];
			V[i]%=mod;
		}
		if(i>=5)
		{
			V[i]+=V[i-5];
			V[i]%=mod;
		}
	}
	//freopen("r.txt","w",stdout);

	while(T--)
	{
		cin>>Cur>>K;
		vector<int> A(N+2,0);

		for(i=0;i<K;i++)
            A[i]=V[i]%mod;
		for(i=K;i<=Cur;i++)
		{
                A[i]=0;
				A[i]+=A[i-K];
				A[i]%=mod;
				A[i]+=A[i-2];
				A[i]%=mod;
				A[i]+=A[i-5];
				A[i]%=mod;
		}
    cout<<A[Cur]<<endl;
	}
}
