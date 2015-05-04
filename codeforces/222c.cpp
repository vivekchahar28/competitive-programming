#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB push_back
#define F first
#define S second
main()
{
    int n,m,k,a[501][501],mark[501][501],i,j;
    string s;
    cin>>n>>m>>k;
    pair<int,int> p,p1;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<m;j++)
        {
           if(s[i]=='#') a[i][j]=0;
           else
           {
               a[i][j]=1;
               p.F=i;
               p.S=j;
           }
        }
    }
    vector<vector<pair<int,int> > > v(n*m);
    queue<pair<int,int> > q;
    q.push(p);
    mark[p.F][p.S]=1;
    p.F=-1;
    p.S=-1;
    q.push(p);
    int level=0;
    v[level++].PB(p);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        if(p.F==-1)
        {
            if(q.size()==0)
            break;
            else
                {
                    cout<<"A";
                q.push(p);
            level++;
                }
        }
        if(p.F>1)
        {
            if(a[p.F-1][p.S]==1&&mark[p.F-1][p.S]!=1)
            {
                p1.F=p.F-1;
                p1.S=p.S;
                q.push(p1);
                v[level].PB(p1);
            }
        }
        if(p.S>1)
        {
            if(a[p.F][p.S-1]==1&&mark[p.F][p.S-1]!=1)
            {
                p1.F=p.F;
                p1.S=p.S-1;
                q.push(p1);
                v[level].PB(p1);
            }
        }
        if(p.F<n-1)
        {
              if(a[p.F+1][p.S]==1&&mark[p.F+1][p.S]!=1)
            {
                p1.F=p.F+1;
                p1.S=p.S;
                q.push(p1);
                v[level].PB(p1);
            }
        }
         if(p.S<n-1)
        {
              if(a[p.F][p.S+1]==1&&mark[p.F][p.S+1]!=1)
            {
                p1.F=p.F;
                p1.S=p.S+1;
                q.push(p1);
                v[level].PB(p1);
            }
        }
    }
    for(i=level;i>=0;i--)
    {
        for(j=0;j<v[level].size(),k>0;j++)
        {
            p=v[i][j];
            a[p.F][p.S]=2;
            k--;
        }
    }
    for(i=0;i<n;i++,cout<<endl)
        for(j=0;j<m;j++)
    {
        if(a[i][j]==1)
            cout<<'.';
        else if(a[i][j]==2)
            cout<<'X';
        else cout<<'#';
    }
}


