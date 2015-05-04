#include<iostream>
#include<algorithm>
using namespace std;
long long n,a[1000000],sum=0,i,var=0;
main()
{

cin>>n;
for(i=0;i<n;i++){cin>>a[i];var+=a[i];}
sort(a,a+n);
sum=var;
for(i=0;i<n-1;i++)
{
sum+=a[i];
var=var-a[i];
sum+=var;
//cout<<var<<endl;
}
cout<<sum<<endl;
}
