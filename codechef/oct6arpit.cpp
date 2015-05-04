#include<bits/stdc++.h>
using namespace std;
#define SHIFT 1000000
int n;
int ans = 4;
vector< vector<int> > pmap(20000003);
vector<pair<int,int> > points;

void input()
{
    cin>>n;
    points.resize(n);

    for(int i = 0 ; i<n ; i++)
    {
        cin>>points[i].first>>points[i].second;
        assert(points[i].first<=1000000&&points[i].first>=-1000000);
        assert(points[i].second<=1000000&&points[i].second>=-1000000);
        points[i].first  += SHIFT;
        points[i].second += SHIFT;

    }

    sort(points.begin(),points.end());

    for(int i = 0 ; i<n ; i++)
        pmap[  points[i].first  ].push_back(points[i].second);
}

long long dist(long long a, long long b, long long c, long long d)
{
    return ((a-c)*(a-c) + (b-d)*(b-d));
}

bool equals(int x, int y, int p, int q)
{
    if(x == p && y == q)
        return 1;
    return 0;
}

int checkabove(int p, int q, int r, int s)
{   int x = p + s - q;
    int y = q + p - r;

    if( x>=0 && y>= 0 && binary_search(pmap[x].begin(),pmap[x].end(),y))
        return 1;

    return 0;
}

int checkbelow(int p, int q, int r, int s)
{   int x = p + q - s;
    int y = q - p + r;

    if( x>=0 && y>= 0 && binary_search(pmap[x].begin(),pmap[x].end(),y))
        return 1;

    return 0;
}


int main()
{   std::ios::sync_with_stdio(false);

    input();

    if(n == 0)
        ans = 4;
    else if(n == 1)
        ans = 3;
    else
        ans = 2;

    int p,q,r,s,x,y;

    for(int i = 0 ; i<n ; i++)
    {
        p = points[i].first;
        q = points[i].second;

        for( int j = i + 1 ; j < n ; j++ )
        {
            r = points[ j ].first;
            s = points[ j ].second;

            if(checkabove(p,q,r,s)&&checkbelow(r,s,p,q))
            {
                ans=0;
            }
            else if(checkabove(p,q,r,s)||checkbelow(r,s,p,q))
            {
                ans=min(ans,1);
            }
            if(checkbelow(p,q,r,s)&&checkabove(r,s,p,q))
            {
                ans=0;
            }
            else if(checkbelow(p,q,r,s)||checkabove(r,s,p,q))
            {
                ans=min(ans,1);
            }

            }
        if(ans == 0)    break;
    }
    cout<<ans<<endl;

    return 0;
}
