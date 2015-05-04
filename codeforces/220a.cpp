#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,j,a,b,minv=INT_MAX,x,y ,f=0;
    cin>>n>>m>>i>>j>>a>>b;
    if((i==1&&j==1)||(i==1&&j==m)||(i==n&&j==m)||(i==n&&j==1)){cout<<0;return 0;
    }
    if(a>=n||b>=m){f=1;
    }
    x=(i-1)/a;
    y=(j-1)/b;
    if((i-1)%a==0&&(j-1)%b==0)
    {
        if(x==0&&y%2==0&&((i+a<=n)||((i-a)>=1)))
            minv=min(minv,y);
        else if(y==0&&x%2==0&&((j+b<=n)||((j-b)>=1)))
            minv=min(minv,x);
            else if(x==y)
                minv=min(minv,x);
    }
    x=(i-1)/a;
    y=(m-j)/b;
    if((i-1)%a==0&&(m-j)%b==0)
    {
         if(x==0&&y%2==0&&((i+a<=n)||((i-a)>=1)))
            minv=min(minv,y);
        else if(y==0&&x%2==0&&((j+b<=n)||((j-b)>=1)))
            minv=min(minv,x);
            else if(x==y)
                minv=min(minv,x);
    }
    x=(n-i)/a;
    y=(m-j)/b;
    if((n-i)%a==0&&(m-j)%b==0)
    {
        if(x==0&&y%2==0&&((i+a<=n)||((i-a)>=1)))
            minv=min(minv,y);
        else if(y==0&&x%2==0&&((j+b<=n)||((j-b)>=1)))
            minv=min(minv,x);
            else if(x==y)
                minv=min(minv,x);
    }
    x=(n-i)/a;
    y=(j-1)/b;
    if((n-i)%a==0&&(j-1)%b==0)
    {
        if(x==0&&y%2==0&&((i+a<=n)||((i-a)>=1)))
            minv=min(minv,y);
        else if(y==0&&x%2==0&&((j+b<=m)||((j-b)>=1)))
            minv=min(minv,x);
            else if(x==y)
                minv=min(minv,x);
    }
        if(minv==INT_MAX||f)
            cout<<"Poor Inna and pony!";
        else cout<<minv;
}
