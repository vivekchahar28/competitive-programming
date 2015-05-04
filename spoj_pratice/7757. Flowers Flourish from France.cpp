#include<bits/stdc++.h>
using namespace std;
main()
{
    int i;
    char s[1000005];
    while(1)
    {
        gets(s);
        if(!strcmp(s,"*"))
        break;
        char ch=tolower(s[0]);
        bool flag=0;
        for( i=0;s[i];i++)
        {
            if(s[i]==' ')
            {
                char ch1=tolower(s[i+1]);
                if(ch!=ch1)
                    {
                        flag=1;
                        break;
                    }
            }
        }
        if(flag)cout<<'N'<<endl;
        else cout<<'Y'<<endl;
    }

}
