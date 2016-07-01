#include<stdio.h>
#include<stdlib.h>
 
/* A linked list node */
struct node
{
 int data;
 struct node *next;
};

struct node *moveToFront(struct node **head,int k)
{
 
  if((*head) == NULL || (*head)->next == NULL)
    return NULL;
     int count=0;

  struct node *curr=*head,*prev;
  struct node *last=*head;
  while(last->next!=NULL)
  {
  	last=last->next;
  }
   while(curr!=NULL && count<k)
   {
   	prev=curr;
   	curr=curr->next;
   	++count;
   }
   prev->next=NULL;
   last->next=*head;
   *head=last;
   
   return(curr);
}
 
void push(struct node** head_ref, int new_data)
{
  /* allocate node */
  struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
  /* put in the data  */
  new_node->data  = new_data;
 
  /* link the old list off the new node */
  new_node->next = (*head_ref);    
 
  /* move the head to point to the new node */
  (*head_ref)    = new_node;
}
 
 
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
  while(node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
}
 
/* Druver program to test above function */
int main()
{
  struct node *start = NULL,*p;   
 
  /* The constructed linked list is:
   1->2->3->4->5 */
  push(&start, 5);
  push(&start, 4);
  push(&start, 3);
  push(&start, 2);
  push(&start, 1);
 
  printf("\n Linked list before moving last to front ");
  printList(start);
 
  p=moveToFront(&start,2);
 
  printf("\n Linked list after removing last to front ");
  printList(p);
 
  getchar();
}        

