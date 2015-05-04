#include <stdio.h>
#include <stdlib.h>
 
// A utility function to get maximum of two integers
int max(int l, int r) { return (l > r ? l : r); }
 
// A Binary Tree Node
struct Node
{
    int data;
    struct Node *left, *right;
};
 
// A utility function to create a new Binary Tree node with given data
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
 
// print the tree in LVR (Inorder traversal) way.
void print(struct Node *root)
{
    if (root != NULL)
    {
        print(root->left);
        printf("%d ",root->data);
        print(root->right);
    }
}
 int isleaf(Node* root)
 {if(!root)return 0;
 if(!root->left&&!root->right)return 1;
 return 0;
}
void cut(Node* root,int k,int sum)
{if(!root) return;
sum+=root->data;//printf("%d ",sum);
cut(root->left,k,sum);
cut(root->right,k,sum);

if(root->left&&isleaf(root->left))
{
              int sum1=sum+=root->left->data;
              if(sum1<k)
              {root->left=NULL;
              }
              }
              if(root->right&&isleaf(root->right))
{
              int sum1=sum+=root->right->data;
              if(sum1<k)
              {root->right=NULL;
              }
              }
              }
// Driver program to test above function
int main()
{
    int k = 66;
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    root->left->right->left = newNode(12);
    root->right->right->left = newNode(10);
    root->right->right->left->right = newNode(11);
    root->left->left->right->left = newNode(13);
    root->left->left->right->right = newNode(14);
    root->left->left->right->right->left = newNode(15);
 
    printf("Tree before truncation\n");
    print(root);
 printf("\n");
 int sum=0;
    cut(root, k,sum); // k is 45
 if(isleaf(root)&&root->data<k)root=NULL;
    printf("\n\nTree after truncation\n");
    print(root);
 
   getchar();
}
