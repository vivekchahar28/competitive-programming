#include<bits/stdc++.h>
using namespace std;
#define L int
vector<L > v;
L arr[100000];
void seive()
{
    L i,j;
    for(i=2;i<=100000;i++)
    {
        if(!arr[i])
        {
            for(j=2*i;j<=100000;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(i=1000;i<=9999;i++)
    {
        if(!arr[i])
    {
         v.push_back(i);
    }
    }
}
main()
{
    seive();
   L i,j;

   vector<vector<L> > graph(100000);
   for(i=0;i<v.size();i++)
   {

   for(j=0;j<v.size();j++)
   {
       L count=0;
       L temp=v[j];
       L temp1=v[i];
      // cout<<v[i]<<"  "<<v[j]<<endl;
       while(temp)
       {
           if((temp%10)!=(temp1%10))
            count++;
            temp/=10;
            temp1/=10;
       }
       if(count==1)
       {
           graph[v[i]].push_back(v[j]);
       }
   }
}
   L q;
   cin>>q;
   while(q--)
   {
       L x,y;
       cin>>x>>y;
       queue<pair<L,L> > q;

       q.push(make_pair(x,0));

        L counter;

        map<L,L> m;

        m[x]=1;

        while(!q.empty())
        {
            L tmp=q.front().first;
            L counter1=q.front().second;
            q.pop();
            if(tmp==y)
            {
                counter=counter1;
                break;
            }
            for(i=0;i<graph[tmp].size();i++)
            {
                if(!m[graph[tmp][i]])
                {
                        q.push(make_pair(graph[tmp][i],counter1+1));
                        m[graph[tmp][i]]=1;
                }

            }
        }

        cout<<counter<<endl;
   }
}
