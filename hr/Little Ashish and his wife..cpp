#include<bits/stdc++.h>
using namespace std;
main()
{
	int T,N,K,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		vector<int> V(N,0);
		set<int> s;
		for(i=0;i<N;i++)
		{
			cin>>V[i];
			s.insert(V[i]);
		}
		if(s.size()==K)
		cout<<"Perfect husband\n";
		else if(s.size()<K)
		cout<<"Bad husbad\n";
		else
		cout<<"Lame husband\n";


	}
}
