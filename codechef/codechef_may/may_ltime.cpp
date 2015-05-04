#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <math.h>
#include <ctime>
using namespace std;
main(){
vector<long> v;
       long t,n,a[100000],i,c,j;
       cin>>t;
       while(t--)
       {c=0;
       v.clear();
                 cin>>n;
                 for(i=0;i<n;i++)
                { cin>>a[i];
                if(a[i]%n==0)
              {v.push_back(i+1);
                a[i]=-1;}
                }
                 
           for(i=0;i<n-1;i++)
           {if(a[i]!=-1)
           {
                           for(j=i+1;j<n;j++)
                           {if((a[i]+a[j])%n==0&&a[j]!=-1)
                           {
                                                          v.push_back(i+1);
                           v.push_back(j+1);
                           a[i]=-1;
                           a[j]=-1;break;
                           }}
                           }}
                           sort(v.begin(),v.end());
                           c=v.size();
                           if(c==0)cout<<-1<<endl;
                           else
                           {
                           cout<<c<<endl;
                           for(i=0;i<c;i++)
                           cout<<v[i]<<" ";
                           cout<<endl;
                           }
                           }
                           return 0;
                           }
