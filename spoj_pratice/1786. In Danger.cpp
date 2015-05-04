#include<bits/stdc++.h>
using namespace std;
main()
{

    while(1)
    {
        long long a,b;
        string s;
        cin>>s;
        a=(s[0]-48)*10;
        a+=(s[1]-48);
        b=s[3]-48;
        if(a==0&&b==0)
            break;
            a=a*pow(10,b);
            long long n=1;
            while(a-n>0)
            {
                a-=n;
                n*=2;
            }
            cout<<2*a-1<<endl;
    }
}
