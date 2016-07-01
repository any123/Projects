
#include <stdio.h>
#include <stdlib.h>
 
// A linked list node
struct node
{
    int data;
    struct node *next;
};
 
/* Given a reference (pointer to pointer) to the head of a list
   and an int, inserts a new node on the front of the list. */
void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void display(struct node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

 void play(struct node *head1,struct node *head2)
{
	struct node *p=head1,*prev=head1;
	struct node *q=head2;
	while(p!=NULL)
	{	prev=p;
		p=p->next;
		if((p->data)%2!=0)
		{
			q->next=p;
			prev->next=p->next;
			free(p);
		}
		
	}
}

 

 int main()
 {
 	struct node *head1=NULL;
 	struct node *head2=NULL;
 	push(&head1,6);
 	push(&head1,1);
 	push(&head1,4);
 	push(&head1,5);
 	push(&head1,10);
 	push(&head1,12);
 	push(&head1,8);
 	play(head1,head2);
 	display(head1);
 	display(head2);
	return 0; 	
 }
 
 
 
 
 
 
 
 
 
 
