#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
long long t,h,n,m,IND,d[524290],a,b,i,p,x1,var,vis[1000000],place[1000000];
main()
{
vector<long long > x;
cin>>t;
while(t--)
{
for(i=0;i<1000000;i++){vis[i]=0;place[i]=0;}
cin>>h>>n>>m>>a>>b>>IND;
for(i=0;i<m;i++){cin>>d[i];
}
x.clear();
x.push_back(0);
p=IND;
vis[IND]=1;
for(i=1;i<n;i++)
{

    x.push_back( x[i - 1] + d[IND]);
      IND= (a * IND + b) % m;
      if(vis[IND]==1)break;
      else {vis[IND]=1;place[IND]=i;}
}
var=0;
long long siz=i-place[IND],sz1;
//for(j=0;j<place[IND];j++)var+=x[j];
for(long long j=place[IND];j<i;j++)x1+=x[j];
sz1=(n-place[IND])/siz;
n=(n-place[IND])%sz1;
var+=x[n]+x[i-1]*siz;

double h1=h;
h1=h1*var;
h1/=2;
printf("%0.1lf\n",h1);
}
}
