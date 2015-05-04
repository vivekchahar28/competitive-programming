#include<bits/stdc++.h>
using namespace std;
main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(!n)
            break;
            int v=1,i=0;
        while(n-v>=0)
        {
            v*=2;
            i++;
        }
        cout<<i-1<<endl;
    }
}
