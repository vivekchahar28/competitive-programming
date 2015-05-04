#include<limits.h>
#include<iostream>
#include<algorithm>
using namespace std;
main()
{
long c,d,x,x1,arr[1000],i;
while(1)
{
x1=INT_MAX;
cin>>c>>d;
if(c==0&&d==0)break;
while(c--)
{cin>>x;
x1=min(x,x1);
}
for(i=0;i<d;i++)
{
cin>>arr[i];
}
sort(arr,arr+d);
if((x1<arr[0])||(x1<arr[1]))cout<<"Y"<<endl;
else cout<<"N"<<endl;
}
}
