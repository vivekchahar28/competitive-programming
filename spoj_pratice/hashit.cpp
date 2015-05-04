#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
main()
{
   long long t,n,hkey,i,j,k,f=1;
   long long hhkey;
   char s[1000000];
   int arr[101];
   string st,st1;
   cin>>t;
   map<long long, string> m;
   map<long long,string>::iterator it;
   while(t--)
   {
        m.clear();
       cin>>n;
       for(i=0;i<101;i++)arr[i]=0;
       for(i=0;i<n;i++)
       {
            k=0;
            cin>>s;
                hkey=0;
                st.clear();
                while(s[k]!=':')k++;
                k++;

           for(j=1;s[k];k++)
               {
                 st.push_back(s[k])  ;
                 hkey+=s[k]*(j);
                 j=j+1;
               }

               hkey*=19;
               hkey%=101;

           if(s[0]=='A')
           {
               if(arr[hkey]==0)
               {arr[hkey]=1;
                   m[hkey]=st;
               }
               else if(m[hkey].compare(st)!=0)
               {
                   for(j=1;j<20;j++)
                   {
                       hhkey=hkey+j*j+23*j;
                       hhkey%=101;
                       if(arr[hhkey]==0)
                        {
                            arr[hhkey]=1;
                            m[hhkey]=st;
                            break;
                   }
                   else
                   {
                       if(m[hhkey]==st)
                        break;
                   }

               }
           }
       }
       else{

           if(arr[hkey])
           {
               if(m[hkey]==st)
                { m.erase(hkey);
                arr[hkey]=0;
       }
               else
               {
                   for(j=1;j<20;j++)
                   {
                       hhkey=hkey+j*j+23*j;
                       hhkey%=101;
                       if(m[hhkey]==st)
                       {
                           m.erase(hhkey);
                           arr[hhkey]=0;

                       }
                   }
               }
           }
           else
               {
                   for(j=1;j<20;j++)
                   {
                       hhkey=hkey+j*j+23*j;
                       hhkey%=101;
                       if(m[hhkey]==st)
                       {
                           m.erase(hhkey);
                           arr[hhkey]=0;
                       }
                   }
               }
            }
        }
long c=0;
   for(i=0;i<101;i++)if(arr[i])c++;
   cout<<c<<endl;
   for(i=0;i<101;i++)
   {
       if(arr[i])
       {
           cout<<i<<":"<<m[i].c_str()<<endl;
       }
   }
   }
   return 0;
}
