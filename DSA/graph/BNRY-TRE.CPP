#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
typedef struct binary_tree
{
  int da;
  struct binary_tree *left,*right;
}nd;
nd *make(nd*,int);
nd *crt(int);
void inorder(nd*);
void preorder(nd*);
void postorder(nd*);
nd *root=NULL;
void main()
{
  int ch,da;
  clrscr();
  while(1)
  {
    printf("\n1.Insert 2.InOrder 3.PreOrder 4.PostOrder 5.Exit");
    printf("\nEnter your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:  printf("Enter the Number: ");
	       scanf("%d",&da);
	       root=make(root,da);
	       break;
      case 2:  inorder(root);
	       break;
      case 3:  preorder(root);
	       break;
      case 4:  postorder(root);
	       break;
      case 5:  exit(0);
      default: printf("\nYou have Entered Wrong Choice Please Enter Correct Choice");
    }
  }
  getch();
}

nd *make(nd *root,int da)
{
  if(root==NULL)
    return crt(da);
  else
  {
    if(da<=root->da)
      root->left=make(root->left,da);
    else
      root->right=make(root->right,da);
    return root;
  }
}

nd *crt(int da)
{
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  nw->da=da;
  nw->left='\0';
  nw->right='\0';
  return nw;
}

void inorder(nd* root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d-",root->da);
    inorder(root->right);
  }
}

void preorder(nd* root)
{
  if(root!=NULL)
  {
    printf("%d-",root->da);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(nd* root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("%d-",root->da);
  }
}

