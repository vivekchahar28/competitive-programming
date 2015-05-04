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
main()
{
      long t,n,m,a[100005],a1[100006],x,y,k;
      vector<vector<long> > v[100006];
      pair<long,long> p[100005];
      stack<pair<long,long> > s;
      cin>>t;
      while(t--)
      {k=0;
                cin>>n>>m;
                for(i=0;i<n;i++){cin>>a[i];a1[i]=0;}
                for(i=0;i<n;i++)
                {
                                if(a1[a[i]]==0)
                                {t=a[i];
                                do
                                {v[k].push_back(a[i]);
                                              t=a[t];

                                              }while(t!=a[i]);
                                              k++;
                                              }
                                              }
                                              for(i=0;i<k;i++)
                                              {sort(v[i].begin(),v[i].end());
                                              }
                                              for(i=0;i<m;i++)
                                              {
                                                              cin>>p[i].first>>p[i].second;
                                                              }
                                                              sort(p,p+m);
                                                              for(i=m-1;i>=0;i--)
                                                              {
                                                              s.push_back(p[i]);
                                                              }
                                                              l=0;
                                                              while(s.size()>1)
                                                              {
                                                                               p1=s.top();
                                                                               s.pop();
                                                                               p2=s.top();
                                                                               s.pop();
                                                                               if(p2.first<=p1.second)
                                                                               {
                                                                                                      p1.second=max(p1.second,p2.second);
                                                                                                      s.push_back(p1);
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                          p[l].first=p1.first;
                                                                                                          p[l++].second=p1.second;
                                                                                                          s.push_back(p2);
                                                                                                          }
                                                                                                          }
                                                                                                          p[l++]=s.top();
                                                                                                          for(i=0;i<n;i++)a1[i]=0;
                                                                                                          int z=0;
                                                                                                          for(i=0;i<l;i++)
                                                                                                          {
                                                                                                                         p1.first=p[i].first;
                                                                                                                         p1.second=p[i].second;
                                                                                                                  for(i=p1.first;i<=p1.second;i++)
                                                                                                                  {a1[i]=z;       }
                                                                                                                  z++;
                                                                                                                  }
                                                                                                                  int q,w,flag=0;
                                              for(i=0;i<k;i++)
                                              {
                                                      q=v[i][0];
                                                      w=v[i][v[i].size()-1];
                                                      if(a1[q]!=a[w]){flag=1;        break;
                                                      }
                                                      }
                                                      if(flag)cout<<"Impossible"<<endl;
                                                      else cout<<"Possible"<<endl;
                                                      }
                                                      return 0;
                                                      }


