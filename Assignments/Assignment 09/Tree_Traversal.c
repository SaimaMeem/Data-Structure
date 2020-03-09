#include <stdio.h>
#include <stdlib.h>

//using namespace std;
struct Node
{
  int data;
  struct Node* left;
  struct Node* right;
};

struct Node *root;

void insert(int value)
{
  struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = value;
 newNode->left = NULL;
 newNode->right = NULL;
 if(root == NULL){
  root = newNode;
 }
 else{
  struct Node *temp = root;
  while(1)
  {
   if(newNode -> data <= temp -> data){
     if(temp -> left == NULL){
      temp -> left = newNode;
      break;
      }
    else{
     temp = temp -> left;
    }
    }
   else{
     if(newNode -> data <= temp -> data){
     if(temp -> right == NULL){
      temp -> right = newNode;
      break;
      }
    else{
     temp = temp -> right;
    }
    }
   }
  }
 }
}
void Postorder(struct Node *r)
{
  if (r == NULL)return;
  Postorder(r->left);
  Postorder(r->right);
  printf("%d ", r->data);
}


void Inorder(struct Node *r)
{
  if (r == NULL)return;
  Inorder(r->left);
  printf("%d ", r->data);
  Inorder(r->right);
}


void Preorder(struct Node *r)
{
  if (r == NULL)return;
  printf("%d ", r -> data);
  Preorder(r -> left);
  Preorder(r -> right);
}

int main()
{
   root = NULL;
   insert(55);
   insert(40);
   insert(80);
   insert(34);
   insert(28);
   insert(38);
   insert(60);
   insert(90);

     printf("\nPreorder traversal of binary tree is \n");
     Preorder(root);

     printf("\nInorder traversal of binary tree is \n");
     Inorder(root);

     printf("\nPostorder traversal of binary tree is \n");
     Postorder(root);

     return 0;
}
