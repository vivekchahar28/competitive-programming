
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        long long sum=0;
        int x=sqrt(N);
        for(int i=1;i<=x;i++)
        {
            if(N%i==0)
            {
                if(i!=N/i)
                    sum+=(i+N/i);
                else
                    sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
