#include<iostream>
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
//*****************************
void inorder(node *root)
{
     if(root==NULL)
     return;
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
     }
     node* trim(node* root,int l,int r)
     {
           if(!root)return NULL;
           node* l1=trim(root->left,l,r);
           node* r1=trim(root->right,l,r);
           if(root->data<l)
           {node* t=root->right;
           delete root;
           return t;
           }
           else if(root->data>r)
           {node* t=root->left;
           delete root;
           return t;
           }
           root->left=l1;
           root->right=r1;
           return root;
           }
           int isc(node* root)
           {int l=0,r=0;
               if(!root)return 1;
               if(root->left&&root->right)return (root->data==root->left->data+root->right->data);
               if(root->left&&!root->right) return (root->data==root->left->data);
               if(!root->left&&root->right) return (root->data==root->right->data);
               isc(root->left);
               isc(root->right);
               }
               /*int isb(node* root)
               {int lh,rh;
               if(!root)return 1;
               lh=h(root->left);
               rh=h(root->right);
               if(abs(lh-rh)>1)return 0;
               return (isb(root->left)&&isb(root->right));
               }*/
               int isleaf(node* root)
               {if(!root->left&&!root->right)return 1;
               return 0;
               }
               void left(node* root)
               {if(isleaf(root))return ;
               cout<<root->data<<" ";
               left(root->left);
               }
               void right(node* root)
               {if(isleaf(root))return ;
               right(root->right);
               cout<<root->data<<" ";
               }
               void leaf(node* root)
               {if(!root)return;
               leaf(root->left);
               if(isleaf(root))cout<<root->data<<" ";
               leaf(root->right);
               }
               
               void bp(node* root)
               {
                    if(!root)return;
                    left(root);
                    leaf(root);
                    right(root->right);
                    }
                    int dis(node* root,int k,int d)
{
    if(!root)return -1;
   return( dis(root->left,k,d+1)||
    dis(root->right,k,d+1));
    if(root->data==k) return d;
    return -1;
}
       main()
           {
           node *root= make_node(6);
           root->left=make_node(3);
           root->right=make_node(3);
           root->left->left=make_node(2);
           root->left->right=make_node(1);
           root->left->left->left=make_node(1);
           root->left->left->right=make_node(2);
           inorder(root);
          // root=trim(root,6,8);cout<<endl;
           //cout<<endl<<isb(root);
           cout<<endl;
           //bp(root);
           cout<<dis(root,2,0)<<endl;
            // inorder(root);
           getchar();
           }
