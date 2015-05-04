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
     //**************************************************
     int max_depth(node *root)
     {
         int left,right;
         if(root==NULL)
         return 0;
         else
         {
         left=max_depth(root->left);
         right=max_depth(root->right);
         return (max(left,right)+1);
         }
         }
         //***********************************************
         void printarray(int a[],int n)
         {
         for(int i=0;i<n;i++)
         cout<<a[i]<<" ";
         cout<<endl;
         }
         //*****************************************************
                  void root_to_leaf(node *root,int a[],int path_len);
         void printPaths( node* root) 
{
  int path[1000];
  root_to_leaf(root, path, 0);
}
         void root_to_leaf(node *root,int path[],int path_len)
         {
              if(root==NULL)
              return ;
              path[path_len++]=root->data;
              cout<<path[path_len-1]<<" ";
              if(root->left==NULL&&root->right==NULL)
                   {
              printarray(path,path_len);}
              else
              {
              root_to_leaf(root->left,path,path_len);
              root_to_leaf(root->right,path,path_len);
                  }   }
         //*********************************************
        int children_sum_property(node *root)
        {int left_data=0,right_data=0;
       
            if(root==NULL||root->left!=NULL&&root->right!=NULL)return 1;
             else
  {

    if(root->left != NULL)
      left_data = root->left->data;

    if(root->right != NULL)
      right_data = root->right->data;
 
    if((root->data == left_data + right_data)&&
        children_sum_property(root->left) &&
        children_sum_property(root->right))
      return 1;
    else
      return 0;
  }
}         
//********************************
        main()
           {
           node *root= make_node(1);
           root->left=make_node(2);
           root->right=make_node(3);
           root->left->left=make_node(4);
           root->left->right=make_node(5);
           root->right->left=make_node(6);
           root->right->right=make_node(7);
           root->left->left->left=make_node(8);
           inorder(root);
           cout<<endl<<max_depth(root)<<" \n";
           //printPaths(root);
           if(children_sum_property(root)==1)cout<<"YES";else cout<<"NO";
           
            getchar();
           }
           
