#include<bits/stdc++.h>
using namespace std;
#define sd scanf("%d",&n)
#define PB push_back
#define F first
#define S second
#define L long
L L t,n,a[100002],b[100002],i,m,k,j;
pair<L,pair<L,L> > p[1000002];
main()
{

    cin>>t;
    while(t--)
    {
       cin>>n;
       for(i=0;i<n;i++)
        cin>>a[i];
       cin>>m;
       L count=0;
       for(j=0;j<m;j++)
       {
           L c,x,y;
           cin>>p[j].F>>p[j].S.F>>p[j].S.S;
           if(p[j].F==1)
            count++;
       }
       if(count==m)
       {
           int v[n+1];
            for(i=0;i<n;i++)
            v[i+1]=a[i];
          b[0]=0;

    for(int i = 1; i<=n; i++)
    {
        b[i] = (v[i]!=v[i-1]) ? b[i-1]+1:b[i-1];

    }

            for(int i = 0 ; i<m ; i++)
        {
            int x,l,r;
            l=p[i].S.F;
            r=p[i].S.S;
             if(v[l] == v[l-1])
                printf("%d\n",b[r] - b[l-1]+1);
            else
                printf("%d\n",b[r] - b[l-1]);
        }
       }
       else
       {
           for(j=0;j<m;j++)
           {
               if(p[j].F==1)
               {
                   L c=1;
                   for(i=p[j].S.F;i<p[j].S.S;i++)
                   {
                       if(a[i]!=a[i-1])
                        c++;
                   }
                   cout<<c<<endl;
               }
               else
               {
                   L temp[n],k=0;

                   for(i=p[j].S.F-1;i<p[j].S.S;i++)
                   {
                       temp[k++]=a[i];
                   }
                   for(i=0;i<p[j].S.F-1;i++)
                   {
                       temp[k++]=a[i];
                   }
                   for(i=p[j].S.S;i<n;i++)
                   {
                       temp[k++]=a[i];
                   }
                   for(i=0;i<n;i++)
                   {
                       a[i]=temp[i];
                   }

               }
           }
       }

    }

}

