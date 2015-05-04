#include<bits/stdc++.h>
using namespace std;
int n,arr[1000],i,j,k,k1,l;
int a_b_c[1000001],d_e_f[1000001];
main()
{
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           for(l=0;l<n;l++)
           {
            a_b_c[k++]=arr[i]*arr[j]+arr[l];
           }
       }
   }
   for(i=0;i<n;i++)
   {
       if(arr[i])
       {
       for(j=0;j<n;j++)
       {
           for(l=0;l<n;l++)
           {
                d_e_f[k1++]=(arr[l]+arr[j])*arr[i];
           }
       }
   }
   }
    sort(d_e_f,d_e_f+k1);
long long counter=0LL;
   for(i=0;i<k;i++)
   {
       counter+=(upper_bound(d_e_f,d_e_f+k1,a_b_c[i])-lower_bound(d_e_f,d_e_f+k1,a_b_c[i]));
   }
   printf("%lld\n",counter);

}
