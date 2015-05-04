#include<bits/stdc++.h>
using namespace std;
int arr[1000003];
vector<int> prime;
void seive()
{

    arr[0]=arr[1]=1;
    int i,j;
    for(i=2;i<1000001;i++)
    {
        if(arr[i]==0)
         {
             for(j=2*i;j<1000001;j+=i)
            arr[j]=1;
           }
    }
    for(i = 2 ; i<1000001; i++)
        if(!arr[i]) prime.push_back(i);
}

main()
{
    seive();
int t;
cin>>t;
while(t--)
{
    long long n,i,k=0,n1;
    cin>>n;
    n1=n;
    if(n==1||n==0)
    {
        cout<<"YES"<<endl;
        continue;
    }
    for(i=0;prime[i]*prime[i]<=n1;)
    {
        if( n%prime[i] == 0)
        {
            if( prime[i] % 4 ==3 )
            {
            k++;
            }
            n/=prime[i];
        }
        else i++;
    }
    if(k!=0&&k%2==0)cout<<"YES"<<endl;
    else if(k==0&&n1%4==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
