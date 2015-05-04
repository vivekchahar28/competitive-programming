#include<iostream>
using namespace std;
int arr[1000000];
int tree[4000000];
void bulid(int arr[],int idx,int ss,int se)
{
     if(ss>se)return ;
     if(ss==se){tree[idx]=arr[ss];return;}
     int m=(ss+se)/2;
     bulid(arr,2*idx+1,ss,m);
     bulid(arr,2*idx+2,m+1,se);
     tree[idx]=max(tree[2*idx+1],tree[2*idx+2]);
     }
     int querry(int arr[],int idx,int ss,int se,int l,int r)
     {
          if(ss>r||se<l)return INT_MIN;
          if(ss>=l&&se<=r)return tree[idx];
          int m=(ss+se)/2;
         return max(querry(arr,2*idx+1,ss,m,l,r),querry(arr,2*idx+2,m+1,se,l,r));
          }
          void update(int idx,int ss,int se,int l,int r,int y)
          {
               if(l<ss||r>se) return;
               int m=(ss+se)/2;
        cout<<idx;getchar();       
        tree[idx]=max(tree[2*idx+1],tree[2*idx+2]);
 update(2*idx+1,ss,m,l,r,y);update(2*idx+2,m+1,se,l,r,y);
 if(ss==l&&ss==r)tree[idx]=y;
//tree[idx]=max(tree[2*idx+1],tree[2*idx+2]);
}

          
main()
{
      int n,m,i,z,x,y;
      cin>>n;
      for(i=0;i<n;i++)cin>>arr[i];
      bulid(arr,0,0,n-1);
      cin>>m;
      while(m--)
      {
      cin>>z>>x>>y;
      if(z==0)
      update(0,0,0,n-1,x-1,y);
      else cout<<querry(arr,0,0,n-1,x-1,y-1)<<endl;
      }
      return 0;
      }
      
      
