#include<algorithm>
#include<string.h>
#include<iostream>
using namespace std;
main()
{

    int n,r,r1,l,i,k,j;
    cin>>n;
    char s[2000];
    char s1[30][30];
    while(n)
    {
        cin>>s;
        l=strlen(s);
        r1=l/n;
        r=r1;//cout<<r<<endl;
        for(i=0;i<r;i++)
        {
            if(i%2)
            {
                reverse(s+i*n,s+(i+1)*n);
            }
        }
        //cout<<s<<endl;
        k=0;
        for(j=0;j<r;j++)
        {for(i=0;i<n;i++)
           {s1[j][i]=s[k++];
        }
    }
    for(j=0;j<n;j++)
        {for(i=0;i<r;i++)
        {
            cout<<s1[i][j];
        }}
        cout<<endl;
    cin>>n;
}
}
