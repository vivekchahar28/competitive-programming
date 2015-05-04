#include<bits/stdc++.h>
using namespace std;

long long mod=1000000007;

long long call(long long a,long long b)
{
	if(a==1||b==0)
	return 1;
	long long t;
	if(b%2) t=a;
	else t=1;
	long long temp=call(a,b/2)%mod;
	temp=(temp*temp)%mod;
	t*=temp%mod;
	return t;
}



main()
{
	long long t,N,i,j;
	cin>>N;
	vector<int> V(N,0);
	for(i=0;i<N;i++)
	{
		cin>>V[i];
	}
//	cout<<call(2,10);

	vector<long long> F(150,0);
	for(i=0;i<N;i++)
	{
		vector<long long> T(150,0);

		for(j=0;j<150;j++)
		{
			if(F[j])
			T[V[i]^j]+=F[j];
		}
		for(j=0;j<150;j++)
		{
			F[j]+=T[j];
			F[j]%=mod;
		}
		F[V[i]]++;
		F[V[i]]%=mod;
	}

	long long val=0;
	long long power=call(2,mod-2);
	for(i=0;i<150;i++)
	{
	//	cout<<F[i]<< " ";

		long long temp=F[i]%mod;
		temp*=(F[i]-1)%mod;
		temp%=mod;
		temp*=power;
		temp%=mod;
		val+=temp;
		val%=mod;
	}
	cout<<val<<endl;
}

