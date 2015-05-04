#include<iostream>
using namespace std;
long long fact[1000005],t,i,var,k,n;
main()
{

    fact[0]=1;
    fact[1]=1;
    for(i=2;i<25;i++)
    {
        fact[i]=fact[i-1]*i;
    fact[i]%=107;
    }
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n>=5)cout<<0<<endl;
        else if(n==4&&k>2)cout<<0<<endl;
        else if(n==4&&k==2)cout<<fact[24]<<endl;
        else if(n==2||n==1)cout<<n<<endl;
        else if(n==3&&k>2)cout<<0<<endl;
        else cout<<fact[6]<<endl;
    }


    return 0;
}
