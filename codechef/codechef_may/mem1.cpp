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
#include<conio.h>
using namespace std;
main()
{
char s1[][8]={"jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};

      char s[20];
      int n,c,c1,j,i;
      cin>>n;
      cin>>s;
      if(n==8)
      cout<<"vaporeon"<<endl;
      else if(n==6)cout<<"espeon"<<endl;
      else 
      {i=0;
      c=0;c1=0;
      for(j=0;j<7;j++)if(s[j]!='.')c++;
      
       while(i<6)     
       {c1=0;
                        for(j=0;j<7;j++)
       if(s1[i][j]==s[j])
       {c1++;
       
       }
       if(c==c1){cout<<s1[i]<<endl;break;}
      i++;}
      }
      return 0;
      

}
                   
      


