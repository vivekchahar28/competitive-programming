#include<iostream>
using namespace std;
int arr[10000007],arr1[10000007],k,k1,i;
void pre()
{
    k=2;
    k1=3;
    arr[1]=1;
    for(i=2;i<=10000004;)
    {
        while(k!=0&&i<=10000004)
        {
            arr[i++]=k;
            k--;
        }
        k1++;
        k=1;
        while(k!=k1&&i<=10000004)
        {
            arr[i++]=k++;
        }
        k=k1;
    }
}
void pre1()
{
    k=1;
    k1=2;
    arr1[1]=1;
    for(i=2;i<=10000004;)
    {
        k=1;
        k1++;
        while(k!=k1&&i<=10000004)
        {
            arr1[i++]=k++;
        }
        k=k1;
        while(k!=0&&i<=10000004)
        {
            arr1[i++]=k;
            k--;
        }
        k1++;
    }
}
main()
{
    pre();
    pre1();
   long t,n;
   cin>>t;
   while(t--)
   {

       cin>>n;
       cout<<"TERM "<<n<<" IS "<<arr1[n]<<"/"<<arr[n]<<endl;
   }

}
