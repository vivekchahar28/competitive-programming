#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB push_back
#define F first
#define S second
main()
{
    int t,n,a[100001],i;
    cin>>t;
    while(t--)
    {
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
long long  s=0;
for( i=n-1;i>=0;i-=2)
{
    s+=a[i];
}
cout<<s<<endl;
    }

}

