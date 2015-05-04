#include<bits/stdc++.h>
using namespace std;
main()
{
	long long X,Y,N,i;
	cin>>X>>Y>>N;
	vector<long long> V(N,0);
	for(i=0;i<N;i++)
	{
		cin>>V[i];
	}
	queue<pair<long long,long long> > q;
	vector<long long> M(100000,0);
	q.push({X,0});
	M[X]=1;
	long long ans=0;
	while(!q.empty())
	{
		long long val=q.front().first;
		long long pos=q.front().second;
		q.pop();
		if(val==Y)
		{
			ans=pos;
			break;
		}
		else
		{
			for(i=0;i<N;i++)
			{

				long long temp=(val*V[i])%100000;
				if(!M[temp])
				{

					q.push({temp,pos+1});
				}
			}

		}
	}
	cout<<ans<<endl;
}
