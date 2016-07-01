
#include <stdio.h>
#include <stdlib.h>
 
/* structure of a linked list node */
struct node
{
    int data;
    struct node *next;
};


void push(struct node **head_ref, int new_data)
{
    struct node *new_node =
        (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

 void merge(struct node *head1, struct node *head2)
{
	struct node *p=head1,*a; a=p;
	struct node *q=head2,*b; b=q;
	while(a->next!=NULL || b->next!=NULL)
	{
		a=a->next; b=b->next;
		p->next=q;
		q->next=a;
		p=a; q=b;
	}
	printList(head1);
}

/* Driver program to test above functions */
int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
 
    
    push(&head1,5);
    push(&head1,3);
    push(&head1,1);
    push(&head2,6);
    push(&head2,4);
    push(&head2,2);
 
    printf("Given Linked List: ");
    printf("\n");
    printList(head1);
    printList(head2);
 
	
    merge(head1,head2);
 
   printList(head1);
 
   
 
    getchar();
    return 0;
}
 

