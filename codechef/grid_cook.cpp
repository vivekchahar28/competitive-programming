#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n,i,j;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        int a[n+1][n+1];
        for(i=0;i<n;i++)
        {
            cin>>s;
            for(j=0;j<n;j++)
            {
                if(s[j]=='.')
                    a[i][j]=0;
                else
                    a[i][j]=1;
            }
        }
        for(j=0;j<=n;j++)
            {
                a[n][j]=0;
                a[j][n]=0;
            }
            int counter=0;
        for(i=n-1;i>=0;i--)
        {
            bool flag=1;
            for(j=n-1;j>=0;j--)
            {
            if(a[i][j]==1)
            {
                flag=0;
                continue;
            }
            else
            {
                if(flag)
                {
                    if(a[i+1][j]==0)
                    {
                        counter++;
                    }
                    else a[i][j]=1;
                }
                else
                {
                        a[i][j]=a[i+1][j];
                }
            }
        }
    }
    cout<<counter<<endl;
    }
}
