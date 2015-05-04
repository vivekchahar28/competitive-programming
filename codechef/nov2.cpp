#include<bits/stdc++.h>
using namespace std;
#define L long

bool ispal(vector<char> s)
{
   string s1=
    for(L i=0;s[i];i++)
        s1.push_back
    reverse(s.begin(),s.end());
    if(s==s1)
        return 1;
    return 0;
}


main()
{
L t,n;
cin>>t;
while(t--)
{
   string s;
    cin>>s;
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
            break;
    }
    flag=0;
    if(j>i)
    flag=1;
    else
    {
        string s1,s2;
        s1.push_back(s[i++]);
        for(i;i<=j;i++)
        {
            if(i!=j)s1.push_back(s[i]);
            s2.push_back(s[i]);
        }
        cout<<s1<<" "<<s2<<endl;
    }
    if(ispal(s1))
        flag=1;
    else if(ispal(s2))
        flag=1;
    if(flag)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

}
