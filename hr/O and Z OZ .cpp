#include<bits/stdc++.h>
using namespace std;
main()
{
    std::ios::sync_with_stdio(false);

	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int c=0,O=0,Z=0,c1=0,i;
		for(i=0;s[i];i++)
		{
			if(s[i]=='O')
			{
				O+=i-c;
				c++;
			}
			else
			{
				Z+=i-c1;
				c1++;
			}
		}
		cout<<min(O,Z)<<endl;
	}
}
