#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int>  v(26,0);
        int i;
        bool flag=0;
        for(i=0;s[i];i++)
        {
            v[s[i]-'a']++;
            if(v[s[i]-'a']>1)
                flag=1;
        }
        if(flag)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
