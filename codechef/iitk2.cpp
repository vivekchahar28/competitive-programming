#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
int main()
{
    L t,n;
    cin>>t;
    while(t--)
    {
    cin>>n;
    assert(n&&n>=1&&n<=100000);
    if(n%10==0||n==1)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
    return 0;
}
