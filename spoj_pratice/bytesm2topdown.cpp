#include<iostream>
#include<stdio.h>
using namespace std;
main()
{
    int t;
    int mat[200][200],path[200][200];

  cin>>t;
    while(t--)
    {   int n,m,i,j;
        cin>>n>>m;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            cin>>mat[i][j];
            for(j=0;j<=m;j++)
                path[0][j]=0;
            for(j=0;j<=n;j++)
                path[j][n]=0;
                for(i=0;i<=n;i++)
                    path[i][m+1]=0;
                    int max1=-1;
                for(i=1;i<=n;i++)
                {int var=-1;
                    for(j=1;j<=m;j++)
                    {
                        var=max(max(path[i-1][j-1]+mat[i][j],path[i-1][j]+mat[i][j]),path[i-1][j+1]+mat[i][j]);
                        path[i][j]=var;
                        if(i==n) max1=max(max1,path[i][j]);
                    }

                }

                cout<<max1<<endl;
    }
}


