#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    stack<int> s;
    while(n)
    {
        if(n<0)
        {
            if(n%(-2)==0)
            {
                n=(n/(-2));
                s.push(0);
            }
            else
            {
            n=(n/(-2))+1;
              s.push(1);
            }
        }
        else
        {
         s.push(n%(-2))   ;
           n=n/(-2);
        }
    }
    if(s.empty())cout<<0<<endl;
    while(!s.empty())
    {
 cout<<s.top();
 s.pop();
    }
}
