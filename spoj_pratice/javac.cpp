#include<iostream>
using namespace std;
main()
{
int c,java,i,flag,k;
string s,news;
while(getline(cin,s))
{
        news.clear();
        c=java=i=flag=0;
        int l=s.size();
        if(s[0]=='_'||isupper(s[0])||s[l-1]=='_') flag=1;
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='_'||isupper(s[i]))break;
                }
                for(k=0;k<i;k++)
                news.push_back(s[k]);

                    if(s[i]=='_'){
                            c=1;
                            i++;
                            if(isupper(s[i])||s[i]=='_')flag=1;
                    news.push_back(toupper(s[i]));
                    i++;
                    }
                    else if(toupper(s[i])){
                        java=1;
                        news.push_back('_');
                    news.push_back(tolower(s[i]));
                    i++;
                    if(s[i]=='_')
                        flag=1;
                    }

                for(i;i<s.size();i++)
                {
                if(c==1)
                {
                    if(s[i]>='A'&&s[i]<='Z')
                       {
                           flag=1;
                           break;
                       }
                            if(s[i]=='_')
                            {
                                i++;
                                if((s[i]>='A'&&s[i]<='Z')||(s[i]=='_'))
                                        {
                                        flag=1;
                                        break;
                                    }
                                s[i]=toupper(s[i]);
                                news.push_back(s[i]);

                            }
                            else news.push_back(s[i]);
                            }
                        else{
                            if(s[i]=='_')
                            {
                                flag=1;
                                break;
                            }
                            if(s[i]>='A'&&s[i]<='Z')
                            {
                            news.push_back('_');
                            s[i]=tolower(s[i]);
                            news.push_back(s[i]);
                            }
                           else news.push_back(s[i]);
                        }
                        }


if(flag)cout<<"Error!"<<endl;
else cout<<news.c_str()<<endl;
if(cin.eof())break;
}
return 0;
}
