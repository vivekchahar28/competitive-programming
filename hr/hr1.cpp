#include<bits/stdc++.h>
using namespace std;
#define S(n) scanf("%d",&n)
#define L int
 main()
{
    L t;
    S(t);

    while(t--)
    {
        L n,k;
        S(n);
        S(k);
        vector<L> vec(n);

        for(L i = 0 ; i<n ; i++ )
        {
            S(vec[i]);
        }
        sort(vec.rbegin(),vec.rend());
        long long sum = 0;
        for(L i = 0 ; i<k && i<n ; i++)
        {
            sum+=vec[i];
        }
        cout<<sum<<endl;

    }




    return 0;
}

