#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        stack<char> st;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(!isalpha(s[i]))
            {
                if(s[i]==')')
                {
                    while(st.top()!='(')
                    {
                        cout<<st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else st.push(s[i]);
            }
            else cout<<s[i];
        }
        cout<<endl;

    }
}
