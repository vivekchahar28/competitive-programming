#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int arr[n][n],sum[n][n];

        long long val=n;

        for(i=0;i<n;i++)
        {
            arr[0][i]=1;
            sum[0][i]=1;
        //    cout<<sum[0][i]<< " ";
        }
     //   cout<<val<<endl;
        for(i=0;i<n-1;i++)
        {

            if(s[i]==s[i+1])
                {
                    arr[1][i]=1;
                    val+=2;
                    sum[1][i]=2;
                }
                else
                    {
                        arr[1][i]=0;
                        sum[1][i]=0;
                    }
           //     cout<<sum[1][i]<< " ";
        }
     //   cout<<val<<endl;
        for(i=2;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(s[j]==s[j+i]&&arr[i-2][j+1])
                    {
                    arr[i][j]=1;
                     int x=(i-1)/2;
                     if(arr[x][j])
                        {
                            sum[i][j]=1+sum[x][j];
                        }
                        else sum[i][j]=1;

            }
            else {
                    arr[i][j]=0;
                sum[i][j]=0;
            }
            val+=sum[i][j];
           // cout<<sum[i][j]<<" ";
        }
       // cout<<val<<endl;
    }
    cout<<val<<endl;

}
}
