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
    long long l,i,j;
  string st;
  cin>>st;

  l=st.size()-1;
  for(i=l;i>=0;i--)
  {
      if(st[i]<'5')
      {
          cout<<"O-|";
          int v=st[i]-'0';
          for(j=0;j<v;j++)
            cout<<'O';
            cout<<'-';
            v=4-v;
          for(j=0;j<v;j++)
            cout<<"O";
          cout<<endl;
      }
      else{
          cout<<"-O|";
          int v=st[i]-'0';
          v%=5;
          for(j=0;j<v;j++)
            cout<<"O";
            cout<<'-';
            v=4-v;
          for(j=0;j<v;j++)
            cout<<"O";
          cout<<endl;
      }
  }
  }

