#include<bits/stdc++.h>
using namespace std;
int arr[1000004]={0},b[1000001];
void seive()
{

    arr[0]=arr[1]=1;
    int i,j;
    for(i=1;i<1000001;i++)b[i]=i;
    for(i=2;i<1000001;i++)
    {
        if(arr[i]==0)
         {
             b[i]-=(b[i]/i);
             for(j=2*i;j<1000001;j+=i)
        {
            arr[j]=1;
            b[j]-=(b[j]/i);
        }
           }
    }
}
int arr1[1000000]={0},ans[1000000]={0};
void seive1()
{
    arr1[0]=arr1[1]=1;
    int i,j;
    for(i=2;i<1000001;i++)
    {
        if(arr1[i]==0)
         {
        ans[i]=1;
             for(j=i*2;j<1000000;j+=i)
             {
                 ans[j]++;
                 arr1[j]=1;
             }
           }
    }
}

  int a[1000001];

main()
{
    seive1();
    seive();

for(int i = 0 ; i<=10 ; i++)
    a[i] = 0;



for(int i = 11; i<=1000000; i++)
{
    int x = ans[i];
    int y = b[i];

    if((i-x>=10&&a[i-x] == 0 )|| (a[i-y] == 0 && i-y>=10  ))
       a[i] = 1;

}


int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    if(a[n]==0)
        cout<<"Bob\n";
    else cout<<"Alice\n";
}


}
