#include<iostream>
#include<stdlib.h>

using namespace std;
 
/* A linked list node */
struct node
{
 int data;
 struct node *next;
};
 
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
void display(struct node *node)
{
  while(node != NULL)
  {
     cout<<node->data;
    node = node->next;
  }
  cout<<endl;
}
 
 struct node *play(struct node *head)
 {
 	struct node *p=head,*b;
 	b=p;
 	struct node *q=head,*a;
 	a=p->next;
 	while(p->next!=NULL || q->next!=NULL)
 	{
 		q=p->next; 
 		p->next=q->next;
 		p=p->next;
 		q->next=p->next;
 	}
 	
   display(b);
   display(a);
 	
  }
/* Druver program to test above function */
int main()
{
  struct node *start = NULL,*b;   
 
  /* The constructed linked list is:
   1->2->3->4->5 */
  push(&start, 5);
  push(&start, 4);
  push(&start, 3);
  push(&start, 2);
  push(&start, 1);
 
  printf("\n Linked list before moving last to front ");
  	display(start);
	b=play(start);
 	display(b);

 
  getchar();
}        

