#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
struct node{
int data;
struct node *left;
struct node *right;
};
void insert(struct node *root,struct node *New)
{
char ch;
fflush(stdin);
printf("where to insert left/right %d\n",New->data);

scanf("%c",&ch);
if((ch=='r')||(ch=='R'))
{
  if(root->right==NULL)
	root->right=New;
   else
     insert(root->right, New);
}
else
{
  if(root->left==NULL)
	{ root->left=New; }
   else
     insert(root->left, New);
     }
}
struct node* create(){
struct node *New,*root;
char ans,c;
root=NULL;
do
{
New =(struct node*)malloc(sizeof(struct node));//use malloc function to create a //node
fflush(stdin);
printf("enter the data");
scanf("%d",&New->data);
New->left=NULL;
New->right=NULL;
if(root==NULL){
  root=New;
}
else
  insert(root,New);
fflush(stdin);
printf("do you wanna more(Y/N)\n");
scanf("%c",&ans);
}while(ans=='y'||ans=='Y');
return root;
}
void inorder(struct node* root){
if(root==NULL)
    return;
    inorder(root->left);
printf("%d   ",root->data);
inorder(root->right);
}
void insert_mirror_tree(struct node* root,struct node* root1){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=root->data;
    newnode->right=NULL;
    newnode->left=NULL;
    if(root==NULL||root1==NULL)
        return ;
    if(root->left!=NULL)
         root1->right=newnode;
    if(root->right!=NULL)
         root1->left=newnode;
    insert_mirror_tree(root->left,root1->right);

    insert_mirror_tree(root->right,root1->left);

}
struct node* mirror_image(struct node* root){
struct node* root1;
if(root==NULL)
    return root;
root1=(struct node*)malloc(sizeof(struct node));
root1->data=root->data;
root1->left=NULL;
root1->right=NULL;

    insert_mirror_tree(root->left,root1);
return root1;
}
void mirror_inorder(struct node* root){
if(root==NULL)
    return;
mirror_inorder(root->left);
printf("%d   ",root->data);
mirror_inorder(root->right);
}
int main(){
struct node* root,*root1;
root=create();
inorder(root);
printf("\n");
root1=mirror_image(root);
mirror_inorder(root1);
}
