#include<bits/stdc++.h>
using namespace std;
long long c,n,arr[1000004],i,j;
main()
{
for(i=0;i<=1000001;i++)
arr[i]=i*i;
cin>>c;
while(c--)
{
cin>>n;
int f=0;
i=0;j=sqrt(n);
while(i<=j)
{
if(arr[i]+arr[j] == n)
{f=1;
break;
}
else if(arr[i]+arr[j] < n)
i++;
else
j--;
}
if(f)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}
