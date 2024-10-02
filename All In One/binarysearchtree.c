#include <stdio.h>
#include <stdlib.h>
struct node{
  int key;
  struct node *left, *right;
};
struct node *newNode(int item){
  struct node *temp=(struct node *)malloc(sizeof(struct node));
  temp->key=item;
  temp->left=temp->right=NULL;
  return temp;
}
void inorder(struct node *root){
  if (root!=NULL) {
    inorder(root->left);
    printf("%d -> ",root->key);
    inorder(root->right);
  }
}
void preorder(struct node *root){
  if (root!=NULL) {
    printf("%d -> ",root->key);
    preorder(root->left);
    preorder(root->right);
  }
}
void postorder(struct node *root){	
  if (root!=NULL) {
    postorder(root->left);
    postorder(root->right);
    printf("%d -> ",root->key);
  }
}
struct node *insert(struct node *node, int key){
  if (node==NULL)
    return newNode(key);
  if (key<node->key)
    node->left=insert(node->left,key);
  else
    node->right=insert(node->right,key);
  return node;
}
struct node *minValueNode(struct node *node){
  struct node *current=node;
  while (current and current->left!=NULL)
    current=current->left;
  return current;
}
struct node *deleteNode(struct node *root,int key){
  if (root==NULL)
    return root;
  if (key<root->key)
    root->left=deleteNode(root->left,key);
  else if (key>root->key)
    root->right=deleteNode(root->right,key);
  else{
    if (root->left==NULL){
      struct node *temp=root->right;
      free(root);
      return temp;
    }else if (root->right==NULL){
      struct node *temp=root->left;
      free(root);
      return temp;
    }
    struct node *temp=minValueNode(root->right);
    root->key=temp->key;
    root->right=deleteNode(root->right,temp->key);
  }
  return root;
}
int main(){
  struct node *root=NULL;
  int choice,a,b;
	printf("\n1.insert an element\n2.Delete an element\n3.Traversal\n4.Exit");
    do{
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            {
                printf("enter your data to be inserted=");
                scanf("%d",&a);
                root = insert(root, a);
                break;
            }
            case 2:
            {
            	printf("enter your data to be deleted=");
                scanf("%d",&b);
                root = deleteNode(root, b);
                break;
            }
            case 3:
            {
                printf("Inorder traversal: ");
                inorder(root);
                printf("\npreorder traversal: ");
                preorder(root);
                printf("\npostorder traversal: ");
                postorder(root);                
                break;
            }
            case 4:
            {
                printf("\n hasta la vista baby");
                break;
            }
            default:
            {
                printf ("\n Please Enter a Valid Choice(1/2/3/4)");
            }                
        }
    }
    while(choice!=4);
    return 0;
}     
