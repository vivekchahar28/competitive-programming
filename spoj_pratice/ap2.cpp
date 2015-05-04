#include<iostream>
using namespace std;
main()
{
    long long t,a,b,c,n,d,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        n=((c*2)/(a+b));
        if(n!=5)d=(b-a)/(n-5);
        else d=0;
        a=a-2*d;
        cout<<n<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a+i*d<<" ";
        }
        cout<<endl;
    }

}
