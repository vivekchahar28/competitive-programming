#include<bits/stdc++.h>
using namespace std;
main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int d,i;
        cin>>d;
        string s;
        cin>>s;
        //cout<<s;
       // cin>>d;
        vector<int> v;
        for(i=0;s[i];i++)
        {
            if(s[i]!='0'&&s[i]!='1')
             {
                 if(s[i]=='4')
                {
                    v.push_back(3);
                    v.push_back(2);
                    v.push_back(2);

                }
                if(s[i]=='6')
                {
                    v.push_back(5);
                    v.push_back(3);
                }
                if(s[i]=='8')
                {
                    v.push_back(2);
                    v.push_back(2);
                    v.push_back(2);
                    v.push_back(7);
                }
                    if(s[i]=='2')
                        v.push_back(2);
                        if(s[i]=='3')
                        v.push_back(3);
                        if(s[i]=='5')
                        v.push_back(5);
                        if(s[i]=='7')
                        v.push_back(7);
                        if(s[i]=='9')
                        {
                            v.push_back(7);
                            v.push_back(3);
                            v.push_back(3);
                            v.push_back(2);
                        }


                }
             }

            sort(v.begin(),v.end());
            for(i=v.size()-1;i>=0;i--)
            {
                cout<<v[i];
            }
            cout<<endl;

    }
}

