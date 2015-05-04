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
int main()
    {
    
    int t,arr[26],a[26],l,i,sum;
    char s[100003];
    cin>>t;
    while(t--)
        {
        
        cin>>s;
        l=strlen(s);
        if(l%2){cout<<-1<<endl;continue;}
        else {sum=0;
            for(i=0;i<26;i++)arr[i]=0;
            for(i=(l/2);i<l;i++)
                arr[s[i]-'a']++;
          // for(i=0;i<26;i++)cout<<arr[i];
            for(i=0;i<(l/2);i++)
             arr[s[i]-'a']--;
 for(i=0;i<26;i++)if(arr[i]>0)sum+=arr[i];           
        cout<<sum<<endl;    
        
        }
        
    }
}
