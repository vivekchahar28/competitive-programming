#include<bits/stdc++.h>
using namespace std;
main()
{
    string str;
    stack<char> st;
    vector<char> v;
    int k=1;
    while(1)
    {
        v.clear();
        str.clear();
        cin>>str;
        if(str[0] == '-')
            break;
            int i;
        for(i = 0; i < str.size() ; i++)
        {
            if( st.size() == 0 )
                {
                    st.push( str[i] );
                    continue;
                    }
                if( str[i] == '}')
                {
                    if( st.top()== '{')
                        st.pop();
                    else
                        st.push(str[i]);
                    }
                    else
                        st.push(str[i]);
                }
                if( st.size() == 0)
                {
                    cout<<k++<<". "<<0<<endl;
                    continue;
                }
                int counter=0;
                while( !st.empty() )
                {
                  char c = st.top();
                  st. pop();
                  if( c != '}' )counter++;
                  if( st.top() !='{' ) counter++;
                  st.pop();
                }
                    cout<<k++<<". "<<counter<<endl;
    }

}

