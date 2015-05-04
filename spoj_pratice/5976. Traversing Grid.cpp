#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB push_back
#define F first
#define S second
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        if(m<n)
        {
            cout<<(m%2?'D':'U')<<endl;
        }
        else
        {
            cout<<(n%2?'R':'L')<<endl;
        }
    }

}
