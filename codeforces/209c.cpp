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
    string s,news;
    cin>>s;
    int l=s.size(),i,j;
    for(i=0;i<s.size();)
    {
    if(i<l-1&&s[i]==s[i+1])
    {
        news.push_back(s[i]);
        i++;
        if(i<l)
            news.push_back(s[i]);
        i++;
    if(((i)<l)&&(s[i-2]==s[i]))
    {
        j=i;
        while(((i)<l)&&(s[j]==s[i]))
            i++;
            news.push_back(s[i]);
            j=i;
        while(i<l&&s[i]==s[j])
            i++;
    }
    else
        {
            news.push_back(s[i]);
            i++;
            if((i<l)&&(s[i]==s[i-1]))
            {
                j=i-1;
            while(((i)<l)&&s[j]==s[i])
                i++;
                }
                }
                }
    else {
            news.push_back(s[i]);
    i++;
        }
    }
    cout<<news<<endl;;
}
