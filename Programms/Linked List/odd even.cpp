# include<iostream>
# include<stdlib.h>
using namespace std;

struct node
{
	int info;
	struct node *next;
};

void push(struct node **head,int n)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->info=n;
	new_node->next=(*head);
	(*head)=new_node;

}
void display(struct node *head)
{
	while(head!=NULL)
	{
	cout<<head->info;
	cout<<" ";
	head=head->next;
	}
	cout<<endl;
}
void deleteNode(struct node **head_ref, int key)
{
    // Store head node
    struct node* temp = *head_ref, *prev;
 
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->info == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }
 
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->info != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // If key was not present in linked list
    if (temp == NULL) return;
 
    // Unlink the node from linked list
    prev->next = temp->next;
 
    free(temp);  // Free memory
}

void play(struct node *head1,struct node *head2)
{	
	struct node *temp=head1;
	struct node *h2=head2;
	while(temp->next!=NULL)
	{
		if((temp->info)%2!=0)
		{
	
		}
		temp=temp->next;
	}
	
	
}
int main()
{
	struct node *head2=NULL;
	struct node *head1=NULL;
	
	push(&head1,9);	
	push(&head1,5);
	push(&head1,8);	
	push(&head1,6);	
	push(&head1,3);	
	push(&head1,2);	
	display(head1);
	play(head1,head2);
	
	display(head2);
	return 0;		
}
