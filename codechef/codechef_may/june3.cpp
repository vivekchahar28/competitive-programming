#define first F
#define second S
//#include<conio.h>
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
int string_length(char *pointer);
void reverse(char *string)
{
   int length, c;
   char *begin, *end, temp;

   length = string_length(string);

   begin = string;
   end = string;

   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;

   for ( c = 0 ; c < length/2 ; c++ )
   {
      temp = *end;
      *end = *begin;
      *begin = temp;

      begin++;
      end--;
   }
}

int string_length(char *pointer)
{
   int c = 0;

   while( *(pointer+c) != '\0' )
      c++;

   return c;
}

char s[1000006];
pair<char,char>p[100];
main()
{
int t,n,i,l,j,f,k,k1,check;
char var,*s1,*s2;
cin>>t;
while(t--)
{         
          cin>>n;
          for(i=0;i<n;i++)
    {cin>>p[i].first;
    cin>>p[i].second;
}
          cin>>s;
          l=strlen(s);
          s1=new char[l];
          s2=new char[l];
          check=0;
          for(i=0;s[i];i++)
          {
                     for(j=0;j<n;j++)
                           if(s[i]==p[j].F)
                         {  s[i]=p[j].S;break;}
                         }
                         for(i=0;s[i];i++)if(s[i]=='.')check=1;
      //                   cout<<s<<" ";
                         f=0;k=0;l=strlen(s);
                         if(check==1)
                         var='.';
                         else var='\0';
                         for(i=0;s[i]!=var;i++)
                         {
                                            if(f==0&&s[i]=='0')
                                            continue;
                                            else
                                            {  f=1;
                                            s1[k++]=s[i];
                                          
                                            }
                                            }
                                          
                                          s1[k]='\0';
                                            
                                            k1=0;f=0;
                                            if(check==1)
                                            {
                                            
                                            for(i=l-1;s[i]!='.';i--)
                                            { if(f==0&&s[i]=='0')
                                                continue;
                                            else
                                            {f=1;
                                            s2[k1++]=s[i];
                                         
                                            }
                                            }
                                        s2[k1]='\0';
                                          //cout<<s2<<endl;
                                            reverse(s2);
                                          //cout<<s2<<" "<<strlen(s2)<<endl;
                                              if(strlen(s2)!=0)strcat(s1,".");
                                            strcat(s1,s2);
                                            }
//                                            cout<<" p"<<s1<<strlen(s1)<<endl;
                                            if(strlen(s1)==0)
                                            cout<<0<<endl;
                                            else cout<<s1<<endl;
                                            }
                                            return 0;
                                            }
