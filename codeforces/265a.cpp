#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c=0,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
        if(s[i]=='0')
        break;
        else c++;
        if(c==s.size())
    cout<<c<<endl;
    else cout<<c+1<<endl;

}
