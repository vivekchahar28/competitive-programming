#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double sum=0.0;
        for(int i=n;i>=1;i--)
        {
            sum+=double((double)n/(double)i);
        }
       printf("%.2lf\n",sum);
    }
}
