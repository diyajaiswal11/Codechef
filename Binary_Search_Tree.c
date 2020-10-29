#include<stdio.h>
#include<stdlib.h>
struct location
{
  int data;
  struct location *left;
  struct location *right;
};
typedef struct location *LOCATION;
LOCATION cn(int item)
{
  LOCATION temp=(LOCATION)malloc(sizeof(struct location));
  temp->right=NULL;
  temp->left=NULL;
  temp->data=item;
  return temp;
}
LOCATION insert_without_recursion(LOCATION root, int item)
{

  LOCATION temp,prv,cur;
  temp=cn(item);
  temp->data=item;
  if(root==NULL)
    root=temp;
  else
  {
    cur=root;
    while(cur!=NULL)
    {
      if(item>cur->data||item==cur->data)
      {
        prv=cur;
        cur=cur->right;
      }
      else
      {
        prv=cur;
        cur=cur->left;
      }
    }
    if(item<prv->data)
      prv->left=temp;
    else
      prv->right=temp;
  }
  return root;
}
LOCATION insert_with_recursion(LOCATION n,int item)
{
  if(n==NULL)
    return cn(item);
  if(item>n->data||item==n->data)
    n->right=insert_with_recursion(n->right,item);
  else if(item<n->data)
    n->left=insert_with_recursion(n->left,item);
  return n;
}
void inorder(LOCATION root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
  }
}
void preorder(LOCATION root)
{
  if(root!=NULL)
  {
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(LOCATION root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
  }
}
void main()
{
  LOCATION root=NULL;
  int choice,item;
  for(;;)
  {
    printf("Enter the Chocie\n");
    printf("1:Insert without recursion 2:Insert using recursion 3: inorder 4: preorder 5: postorder 6: Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: printf("Enter the item\n");
              scanf("%d",&item);
              root=insert_without_recursion(root,item);
              printf("in-order:");
              inorder(root);
              printf("\n");
              printf("pre-order:");
              preorder(root);
              printf("\n");
              printf("post-order:");
              postorder(root);
              printf("\n");
              break;
      case 3: inorder(root);
              break;
      case 4: preorder(root);
              break;
      case 5: postorder(root);
              break;
      case 2: printf("Enter the item\n");
              scanf("%d",&item);
              root=insert_with_recursion(root,item);
              printf("in-order:");
              inorder(root);
              printf("\n");
              printf("pre-order:");
              preorder(root);
              printf("\n");
              printf("post-order:");
              postorder(root);
              printf("\n");
              break;
      default: exit(0);
    }
  }
}
