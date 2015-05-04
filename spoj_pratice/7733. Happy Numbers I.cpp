#include<iostream>
using namespace std;
int arr[1000]={0},flag;
main()
{
long long n,val=0,counter=0;
cin>>n;
while(n)
    {
        int r=n%10;
        val+=r*r;
        n/=10;
    }
    arr[val]=1;
    if(val==1){
            flag=1;
    cout<<1<<endl;
    return 0;
    }
    n=val;
    val=0;
    counter++;
do
{//cout<<n<<endl;
    while(n)
    {
        int r=n%10;
        val+=r*r;
        n/=10;
    }
    n=val;
     if(arr[n]==1)break;
    counter++;
    arr[val]=1;
    if(val==1){flag=1;break;}
    val=0;

}while(1);

if(flag)cout<<counter<<endl;
else cout<<-1<<endl;
}
