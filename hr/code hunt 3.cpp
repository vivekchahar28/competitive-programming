#include<bits/stdc++.h>
using namespace std;
main()
{
	int T,i;
	cin>>T;
	while(T--)
	{
		string s,s1;
		cin>>s>>s1;
		if(s.size()>s1.size())
		{
			swap(s,s1);
		}
		int diff=s1.size()-s.size();
			vector<int> a(26,0);
			for(i=0;i<s.size();i++)
			{
				a[s[i]-'a']++;

			}
			vector<int> a1(26,0);
			for(i=0;i<s1.size();i++)
			{
				a1[s1[i]-'a']++;
			}
			int sum=0;
			for(i=0;i<26;i++)
			{
				if(a[i]!=a1[i])
				{
				    cout<<i<<" "<<a[i]<<" " <<a1[i]<<endl;
					if(a[i]>a1[i])
					{
						sum+=a[i]-a1[i];
					}
					else
					{
						int x=a1[i]-a[i];
						if(x<=diff)
						{
							diff-=x;
						}
						else
						{
							sum+=x-diff;
							diff=0;
						}

					}
					cout<<sum<<" "<<diff<<endl;
				}
			}
			cout<<sum<<endl;
		}
	}
