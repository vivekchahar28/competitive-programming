#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define FOR(i,n) for(i=1;i<=n;i++)
#define L long
int main()
{
    int a[10];

    for(int i =1 ; i<= 6; i++)
        cin>>a[i];
    a[7]=a[1];
    a[8]=a[2];
    int triple0=0;
    int one00=0;
    for(int i = 1 ; i<=6; i++)
    {
        if(a[i] == 0 && a[i+1] == 0 && a[i+2] == 0)
            triple0 = 1;
        if(a[i] == 1 && a[i+1] == 0 && a[i+2] == 0)
            one00 = !one00;

    }

    if(triple0 == 1)
    {
        cout<<"Winning\n";
        return 0;
    }

    if(one00 == 1)
    {
        cout<<"Winning\n";
        return 0;
    }
    else
    {
        cout<<"Losing\n";
        return 0;
    }

}

