#include<bits/stdc++.h>
using namespace std;
main()
{
long long c,n,arr[100001];
for(i=0;i<=1000001;i++)
arr[i]=i*i;
cin>>c;
while(c--)
{
cin>>c;
i=0;j=sqrt(n);
while(i<j)
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
}

}
