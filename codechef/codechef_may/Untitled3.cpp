#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int t,n,i,j,max;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		int table[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			table[i] = 1;
		}
		max = 0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]>a[j] && table[i]<table[j]+1)
					table[i] = table[j]+1;
			}
		}
		for(i=0;i<n;i++)
		{
			if(max<table[i])
				max = table[i];
		}
		printf("%d\n",max);
	}
	return 0;
}
