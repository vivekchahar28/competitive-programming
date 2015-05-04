#include<iostream>
using namespace std;
long long n,arr[10000000],var=1,i=1;
main()
{
arr[0]=var;
while(var<=1000000000)
{cout<<var<<" ";
    var+=6;
    arr[i++]=var;
}
cout<<arr[i-1]<<endl;
while(1)
{
cin>>n;

}
}
