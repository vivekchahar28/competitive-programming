//dishowm
#i#include <iostream>
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

 #define getcx getchar//_unlocked
                     inline void input( long long &n )
 {
    n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' | ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
 
    while(  ch >= '0' && ch <= '9' )
            n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
  }
 
long long arr[10006],parent_array[10006],sum_array[10006],n,t,q,x,y,c,c1,i,j,c2,temp[10006];
main()
{
      
     
      input(t);
      while(t--)
      {
                input(n);
                 vector<vector<long long> > v(n+1);
                for(i=1;i<=n;i++)
                {input(arr[i]);
                parent_array[i]=i;
                sum_array[parent_array[i]]=arr[i];
                v[i].push_back(i);
                }
                input(q);
                while(q--)
                {
                input(c);
                input(x);
                          if(!c)
                          {
      input(y);
      
      if(parent_array[x]==parent_array[y])cout<<"Invalid query!"<<endl;
      
      else if(sum_array[parent_array[x]]>sum_array[parent_array[y]]){
          c1=parent_array[y];
           sum_array[parent_array[x]]=max(sum_array[parent_array[y]],sum_array[parent_array[x]]);
          c2=v[parent_array[y]].size();
          for(i=0;i<c2;i++){v[parent_array[x]].push_back(v[parent_array[y]][i]);temp[i]=v[parent_array[y]][i];}
           for(i=0;i<c2;i++)          parent_array[temp[i]]=parent_array[x];
                   
          v[c1].clear();}
                 
           else if(sum_array[parent_array[x]]<sum_array[parent_array[y]])
           {
                c1=parent_array[x];
           sum_array[parent_array[y]]=max(sum_array[parent_array[x]],sum_array[parent_array[y]]);
           c2=v[parent_array[x]].size();        
           for(i=0;i<c2;i++) {  v[parent_array[y]].push_back(v[parent_array[x]][i]);temp[i]=v[parent_array[x]][i];}
          for(i=0;i<c2;i++) {parent_array[temp[i]]=parent_array[y];}
                  
          v[c1].clear();
           }
           }
           else
           {
               cout<<parent_array[x]<<endl;
               }
               }
               }
               return 0;
               } 
