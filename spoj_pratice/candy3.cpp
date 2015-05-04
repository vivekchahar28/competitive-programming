#include<iostream>
using namespace std;
main()
{
long long t,n,sum,n1,x;
cin>>t;
while(t--)
{
cin>>n;
if(n==0){cout<<"YES"<<endl;continue;}
n1=n;
sum=0;
while(n--){
cin>>x;
x=x%n1;
sum+=x;
}
if(sum%n1==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

}
