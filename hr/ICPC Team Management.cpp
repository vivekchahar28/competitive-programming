#include<bits/stdc++.h>
using namespace std;
main()
{
	int T,N,K,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		vector<int> V(102,0);
		for(i=0;i<N;i++)
		{
			string s;
			cin>>s;
			V[s.size()]++;
		}
		bool flag=0;
		for(i=0;i<102;i++)
		{
			if(V[i]!=0&&V[i]!=K)
			{
				if(V[i]%K==0)
				continue;
				flag=1;
				break;
			}
		}
		if(flag)
		cout<<"Not possible"<<endl;
		else
		cout<<"Possible\n";
	}
}
