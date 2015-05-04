#include<algorithm>
#include<iostream>
using namespace std;
main()
{

    int n,i,j,k,f=0,c;
    cin>>n;
    char a[n+2][n+2];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
           cin>>a[i][j];

           for(i=1;i<=n;i++)
        {c=0;
            for(j=1;j<=n;j++)
         {

                 if(a[i-1][j]=='o')c++;
                 if(a[i+1][j]=='o')c++;
                 if(a[i][j-1]=='o')c++;
                 if(a[i][j+1]=='o')c++;
                 if((c%2==1)){f=1;break;}
         }

         if(f)break;}
         if(f)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;

}
