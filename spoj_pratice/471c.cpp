#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB push_back
#define F first
#define S second
main()
{
    long long n;
    cin>>n;
    n-=2;
    if(n%3==1)
        cout<<0<<endl;
    else cout<<1<<endl;
}
