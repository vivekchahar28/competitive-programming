#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB(n) push_back(n)
#define F first
#define S second
main()
{
    int t,n;
    sd(t);
    while(t--)
    {
    sd(n);
    int x;
    cin>>x;
    for(int i=1;i<n;i++)
    {
        int item;
        cin>>item;
        x=__gcd(x,item);
    }
    n=(x==1?n:-1);
    cout<<n<<endl;
    }
}
