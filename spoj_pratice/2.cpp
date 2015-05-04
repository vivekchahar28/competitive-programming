#include<algorithm>
#include<iostream>
using namespace std;
main()
{
    pair<long long,long long> p[26];
long long n,k,arr[26],i;
char s[100004];
cin>>n>>k;
cin>>s;
for(i=0;s[i];i++)arr[s[i]-'A']++;
sort(arr,arr+26);
long long sum=0;
for(i=25;i>=0;i--)
{//cout<<arr[i]<<endl;
    if(arr[i]<=k){sum+=arr[i]*arr[i];k-=arr[i];}
    else {
        sum+=k*k;
        break;
    }
}
cout<<sum<<endl;
}
