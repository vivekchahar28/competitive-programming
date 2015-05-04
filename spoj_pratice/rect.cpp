#include<iostream>
#include<math.h>
using namespace std;
main()
{
long long n,sum=0,i,j,var ;
cin>>n;
for(i=1;i<=n;i++)
{


for(j=1;j<=sqrt(i);j++)
{
    if(i%j==0)
    {
        sum++;
}

}//cout<<i<<" "<<sum<<endl;
}
cout<<sum<<endl;
}
