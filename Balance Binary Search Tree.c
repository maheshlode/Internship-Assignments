#include <stdio.h>
#include <stdlib.h>

// Node creation
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

// Create a new node
struct node *newNode(int data)
{
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return (node);
}

// Check for height balance
int checkHeightBalance(struct node *root, int *height)
{
  int leftHeight = 0, rightHeight = 0;
  int l = 0, r = 0;

  if(root == NULL)
  {
    *height = 0;
    return 1;
  }

  l = checkHeightBalance(root->left, &leftHeight);
  r = checkHeightBalance(root->right, &rightHeight);

  *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

  if((leftHeight - rightHeight >= 2) || (rightHeight - leftHeight >= 2))
  {
  	return 0;
  }
  else
  {
  	return (l&&r);
  }
}

void main()
{
  int height = 0;

  struct node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->left->right->right = newNode(10);

  if(checkHeightBalance(root, &height))
  {
  	printf("The tree is balanced");	
  }
  else
  {
	printf("The tree is not balanced");	
  }
}