#include<map>
#include<iostream>
using namespace std;
int v,k=1;
main()
{
    float var=0.5,n,i;
cin>>n;
while(n!=0.00f)
{k=1;
var=0.5;
    while(n>var)
    {
            k++;
        var+=(float)((float)1/(float)(k+1));
    }
cout<<k<<" card(s)"<<endl;
 cin>>n;
}
return 0;
}
