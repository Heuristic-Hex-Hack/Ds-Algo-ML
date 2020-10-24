#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node* create()
{
int a;
struct node *new_n,*curr,*head;
head = NULL;
char c;
do
{
new_n=(struct node*)malloc(sizeof(struct node));
printf("enter data: ");
fflush(stdin);
scanf("%d",&a);
new_n->data=a;
new_n->next=NULL;
if(head==NULL)
{
head=new_n;
curr=new_n;
}
else
{
curr->next=new_n;
curr=new_n;
}
fflush(stdin);
printf("Do you want to enter more (y/n):");
scanf("%c",&c);
}while(c=='y');
return head;
}
void display(struct node *head)
{
struct node *curr;
if(head==NULL)
{printf("The linklist is empty");}
else
{printf("\nYour linklist is: ");
for( curr=head ; curr!=NULL ; curr = curr->next )
{printf("%d ",curr->data);}
}
}
struct node* reverselink(struct Node *head)
{
struct node *prev,*current,*next;
prev=NULL;
current=head;
while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
head=prev;
return head;
}
void main()
{
struct node *head;
head = create();
head=reverselink(head);
display(head);
}
