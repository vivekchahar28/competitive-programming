#include<bits/stdc++.h>
using namespace std;
int n,k,a[15][25];


pair<int,int> findfirst(int visited[], int i)
{
    while(i<=n && visited[i] == 1)
    {
        i++;
    }
    if(i>n)
        return make_pair(-1,-1);

    int idx1 = i;

    while(i<=n && visited[i] == 0)
    {
        i++;
    }
    int idx2 = i-1;

    return make_pair(idx1,idx2);

}

int ans = INT_MAX;
void compute(int visited[])
{
    int x = 0;

        for(int i = 1 ; i<=n; i++)
        {
            x += a[visited[i]][i]-a[visited[i]][i-1];

        }
    ans = min(ans,x);
}


void solve(int visited[],int killer)
{
   cout<<killer<<endl;
    if(killer == k+1)
    {   int x = 0;
        int remain=0;
        for(int i = 1 ; i<=n; i++)
        {
            if(visited[i] == 0)
            {      remain++;
                break;
            }
            else
                x += a[visited[i]][i]-a[visited[i]][i-1];

        }

        if(remain)
            return;

        ans = min(ans,x);
        return;
    }



    solve(visited,killer+1);
    pair<int,int> p;
    for(int i = 1; i<=n ; i++)
    {
        p = findfirst(visited,i);
        if(p.first == -1)
        {   compute(visited);
            return;
        }

        i = p.second;

        int idx1 = p.first;
        int idx2 = p.second;

        for(int j = idx1 ; j <= idx2; j++)
        {
            for(int l = 0; l<=idx2-j+1; l++)
            {
                for(int d = j; d<=l+j; d++)
                {
                    visited[d] = killer;
                }

                solve(visited,killer+1);

                for(int d = j; d<=l+j; d++)
                {
                    visited[d] = 0;
                }

            }
        }

    }


}


int main()
{
    cin>>n>>k;
    int x;
    for(int i=1;i<=k; i++)
    {
        for(int j = 1; j<=n ; j++)
        {
            cin>>x;
            a[i][j] = a[i][j-1]+x;

        }
    }
    int visited[21] = {0};
    solve(visited,1);

    cout<<ans<<endl;

    return 0;

}
