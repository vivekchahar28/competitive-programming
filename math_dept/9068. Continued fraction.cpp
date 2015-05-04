#include<bits/stdc++.h>
using namespace std;
void fun(int a,int b)
{
    if(b==1)

    {
        cout<<a<<endl;
        return;
    }
    if(a%b==0)
 {

    cout<<(a/b)-1<<" "<<1<<endl;
    return ;
}
    else cout<<a/b<<" ";
     fun(b,a%b) ;
}

main()
{
    int t,i;
    char s[10000];
    cin>>t;
    gets(s);
    while(t--)
    {
        bool flag=0;
            gets(s);
        for(i=0;i<s[i];i++)
            if(s[i]=='/')
            flag=1;

        if(flag)
        {
            int a=0,b=0;
            for(i=0;s[i]!='/';i++)
                a=a*10+s[i]-48;
                i++;
            for(;i<s[i];i++)
                b=b*10+s[i]-48;
                fun(a,b);
        }
        else
        {
            int n=0,m=1,v=0;
            bool f=0;
            i=strlen(s)-1;
            while(i>=0)
            {
                v=0;
            for(;i>=0&&s[i]!=' ';i--)
                {
                    v=v*10+s[i]-48;
                }
                i--;
                if(!f)
                {
                 n=1;
                 m=v;
                 f=1;
                }
                else
                {
                    int temp=m*v;
                    temp+=n;
                    n=m;
                    m=temp;
                }
        }
        cout<<m<<"/"<<n<<endl;
    }
    }
}
