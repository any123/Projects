


#include <stdio.h>
#include <stdlib.h>
 
/* structure of a linked list node */
struct node
{
    int data;
    struct node *next;
};
 void swap(int *p, int *q)
 {
 	int c=*p;
 	*p=*q;
 	*q=c;
 }
void sort(struct node *head)
{
	struct node *t=head;
	struct node *p=head,*a;
	
	while(t!=NULL)
	{	a=t;  p=t->next;
		while(p!=NULL)
		{
			if(t->data > p->data)
			swap(&t->data,&p->data);
			p=p->next;
			a=a->next;
		}
		t=t->next;
	}
}
/* Utility function to insert a node at the begining */
void push(struct node **head_ref, int new_data)
{
    struct node *new_node =
        (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
 
/* Utility function to print a linked list */
void printList(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
 
/* Driver program to test above functions */
int main()
{
    struct node *head = NULL;
 
    /* Create following linked list
      12->15->10->11->5->6->2->3 */
    push(&head,3);
    push(&head,2);
    push(&head,6);
    push(&head,5);
    push(&head,11);
    push(&head,10);
    push(&head,15);
    push(&head,12);
 
    printf("Given Linked List: ");
    printList(head);
 
	sort(head);
    printf("\nModified Linked List: ");
    printList(head);
 
   
 
   
 
    getchar();
    return 0;
}
 

