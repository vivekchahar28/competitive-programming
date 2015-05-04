#include<bits/stdc++.h>
using namespace std;
main()
{
    long long t,n=1,i;
    string st;
    cin>>t;
    while(t--)
    {n=1;
        cin>>st;

        for(i=0;i<st.size();i++)
        {
            if(i%2)
            {
                if(st[i]=='l')
                n=n*2-1;
                    else
                    n=(n*2-1)+2;
            }
            else
            {
                if(st[i]=='l')
                    n=n*2;
                else
                    n=(n*2)+2;
            }
            n%=1000000007;
        }
        cout<<n<<endl;
    }
}
