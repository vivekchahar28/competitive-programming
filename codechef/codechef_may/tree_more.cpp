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
#include <queue>
#include <math.h>
#include <ctime>
using namespace std;

typedef struct node 
{
        int data;
        node *left;
        node *right;
        };
        node *make_node(int val)
{
node *temp= new node;
temp->data=val;
temp->left=temp->right=NULL;
}
queue< node* > q;
stack< node* > q1;
void reverse_level_order(node *root)
{node *temp;
q.push(root);
q1.push(root);
while(q.size()!=0)
{
temp=q.front();
q.pop();
if(temp->left)
{q.push(temp->left);
q1.push(temp->left);
}
if(temp->right)
{q.push(temp->right);
q1.push(temp->right);
}
}
while(q1.size()!=0)
{
cout<<q1.top()->data<<" ";
q1.pop();
}
}
int max_sum(node *root)
{
    if(root==NULL) return 0;
 if((root->left!=NULL)&&(root->right)!=NULL) return max_sum(root->left)+max_sum(root->right);
 else return root->data;
}

    bool findpath(node *root,vector<int> &path,int k)
    {
         if(root==NULL)return false;
         path.push_back(root->data);
         if(root->data==k) return true;
         if((root->left&&findpath(root->left,path,k))||(root->right&&findpath(root->right,path,k)))
         return true ;
         path.pop_back();
         return false;
         }
         
void  mirror_( node *root)
        {if(root==NULL)return;
        else {
             mirror_(root->left);
             mirror_(root->right);
             node *temp;
             temp=root->left;
             root->left=root->right;
             root->right=temp;
             }
}             
    void inOrder(struct node* node) 
{
  if (node == NULL) 
    return;
   
  inOrder(node->left);
  printf("%d ", node->data);
 
  inOrder(node->right);
}  
 
int check_BST(node *root)
{if(root==NULL)return 0;
               int m=0,l=0,r=0;
               m=root->data;
               if(root->left){ l=check_BST(root->left);if(m<l)return 1;}
               if(root->right) {l=check_BST(root->right);if(l<r)return 1;}
               return 1;
               }
int f_max(node *root)
{if(root==NULL) return 0;
           int n,l,r,m=0;
           n=root->data;
           l=f_max(root->left);
           r=f_max(root->right);
           m=max(max(n,l),r);
           return m;
           }
int find(node *root,int d)
{
    if(root==NULL)
    return 0;
       if(d==root->data) return 1;
       else return (find(root->left,d)||find(root->right,d));
    }   
//    queue< node*> q;  
    stack< node* > s;
       void reverse_level(node* root)
       {node *t;
            q.push(root);
            while(!q.empty())
            {
            t=q.front();
            s.push(t);
            q.pop();
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
            }
            while(!s.empty())
            {cout<<s.top()->data<<" ";
            s.pop();
            }
            }
            int height(node* root)
            {
                int l,r;
                if(root==NULL) return 0;
                l=height(root->left);
                r=height(root->right);
                return max(l,r)+1;
                }
                int diameter(node* root,int *ptr)
                {
                    if(root==NULL)return 0;
                    int r,r1,l,l1;
                    r=diameter(root->left,ptr);
                    l=diameter(root->right,ptr);
                    *ptr=max((r+l),*ptr);
                    return max(r,l)+1;
                    }
                    int given_sum_path(node* root,int s)
                    {
                        if(root==NULL)return (s==0);
                        s-=root->data;
                         if((root->left&&root->right)) return(given_sum_path(root->left,s)||given_sum_path(root->right,s));
                        else if(root->left) return given_sum_path(root->left,s);
                        else return given_sum_path(root->right,s);
                        }
                        
                    int print_ances(node* root,node* n)
                    {
                         if(root==NULL)return 0;
                         if((root->left==n)||(root->right==n)||print_ances(root->left,n)||print_ances(root->right,n))
                         {cout<<root->data<<" ";
                         return 1;
                         }
                         return 0;
                         }
                         
                        void zigzag(node* root)
                         {
                         node* t;             
                         stack<node*> st,st1;
                         int f=0;
                         st.push(root);
                         while(1)
                         {
                         if(!f)
                         {
                         if(st.empty())break;
                         while(!st.empty())
                         {
                         t=st.top();                  
                         if(t->left)st1.push(t->left);
                         if(t->right)st1.push(t->right);
                         cout<<t->data<<" ";
                         st.pop();
                         }f=1;}                  
                    else {
                         if(st1.empty())break;
                         while(!st1.empty())
                         {t=st1.top();                  
                         if(t->left)st.push(t->left);
                         if(t->right)st.push(t->right);
                         cout<<t->data<<" ";
                         st1.pop();
                         }f=0;} 
                         }                 
                         }
       void no_of_leaf(node* root,int *v)
       {
           if(root==NULL)return ;
           if(!root->left&&!root->right){(*v)++; return;}
           no_of_leaf(root->left,v);
           no_of_leaf(root->right,v);
           }
           
        int childrensum(node* root)
        {   
            if(!root)return 1;
             int n=root->data,r=0,l=0;
            if(root->left) l=root->left->data;
            if(root->right) r=root->right->data;
            return (n==(l+r)&&childrensum(root->left)&&childrensum(root->right));
            }
                    void mchildrensum(node* root)
        {   
            if(!root)return ;
             int n=root->data,r=0,l=0;
             if(root->left) l=root->left->data;
            if(root->right) r=root->right->data;
            root->data=l+r;
            mchildrensum(root->left);
            mchildrensum(root->right);
            
            }
                         
  main()
           {//data
           int n_leaf=0;
           node *root= make_node(10);
           root->left=make_node(8);
           root->right=make_node(2);
           root->left->left=make_node(3);
           root->left->right=make_node(5);
           root->right->left=make_node(1);
           root->right->right=make_node(1);
           root->left->left->left=make_node(3);
           
           //all things

//mchildrensum(root);
cout<<root->data;
           cout<<childrensum(root)<<endl;
           no_of_leaf(root,&n_leaf);
           cout<<n_leaf<<endl;
           zigzag(root);
           cout<<endl;
           print_ances(root,root->left->left);
           cout<<given_sum_path(root,20)<<endl;
           int *p=0;
           cout<<diameter(root,p)<<endl;          //diameter
           cout<<height(root)<<endl;        //height
           cout<<f_max(root)<<endl;         //max element
           cout<<find(root,2)<<endl;        //find 2
           inOrder(root);cout<<endl; mirror_(root);   //mirror image
           inOrder(root);
           cout<<max_sum(root)<<endl;       //max sum
           reverse_level(root);          //reverse traversal
           cout<<endl;
           vector<int> a;
           if(findpath(root,a,2))for(int i=0;i<a.size();i++)cout<<a[i]<<" ";   //path *****
           cout<<endl;
           cout<<check_BST(root);     //BST wrong
           getchar();
           }

