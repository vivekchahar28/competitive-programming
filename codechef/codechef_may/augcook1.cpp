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
      long t,n,m,a[100005],a1[100006],x,y,k,i,l;
      vector<vector<long> > v(100006);
      pair<long,long> p[100005],p1,p2;
      stack<pair<long,long> > s;
      cin>>t;
      while(t--)
      {k=0;

                cin>>n>>m;
                for(i=1;i<=n;i++){cin>>a[i];a1[i]=0;}

              /*  for(i=1;i<=n;i++)
                {
                                if(a1[a[i]]==0)
                                {t=a[i];
                                a1[t]=1;
                                do
                                { v[k].push_back(t);
                                              t=a[t];
                                              a1[t]=1;

                                              }while(t!=a[i]);
                                              k++;
                                              }
                                              }
                                              for(i=0;i<k;i++)
                                              {sort(v[i].begin(),v[i].end());
                                              }
                                              for(i=0;i<k;i++)
                                              {
                                                  for(int j=0;j<v[i].size();j++)
                                                    cout<<v[i][j];
                                                  cout<<endl;
                                              }*/
                                              for(i=0;i<m;i++)
                                              {cin>>x>>y;
                                                              p[i].first=min(x,y);p[i].second=max(x,y);
                                                              }
                                                              sort(p,p+m);
                                                              for(i=m-1;i>=0;i--)
                                                              {//cout<<p[i].first<<p[i].second<<endl;
                                                              s.push(p[i]);
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
                                                                                                      s.push(p1);
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                          p[l].first=p1.first;
                                                                                                          p[l++].second=p1.second;
                                                                                                          s.push(p2);
                                                                                                          }
                                                                                                          }
                                                                                                          p[l++]=s.top();

                                                                                                                  int q,w,flag=0;
                                                                                                                  int j=0;
                                          for(i=0;i<l;i++)
                                          {
                                              q=p[i].first;
                                              w=p[i].second;
                                              for(j=q;j<=w;j++)
                                              if(a[j]>=q&&a[j]<=w){}
                                              else {flag=1;break;
                                              }
                                          }


                                                      if(flag)cout<<"Impossible"<<endl;
                                                      else cout<<"Possible"<<endl;
                                                      }
                                                      return 0;
                                                      }


