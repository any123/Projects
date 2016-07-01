# include<iostream>
# include<stdlib.h>
using namespace std;

struct node
{
	int info;
	struct node *next;
};

void push(struct node **head_ref,int n)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->info=n;
	new_node->next=*head_ref;
	*head_ref=new_node;
	
}
void display(struct node *head)
{
	while(head!=NULL)
	{
	cout<<head->info<<" ";
	head=head->next;
	}
}

void delete_faltu(struct node *head)
{	
	struct node *temp;
	struct node *ptr=head;
	while(ptr!=NULL && ptr->next!=NULL)
	{
		if(ptr->info==ptr->next->info)
		{
			temp=ptr->next->next;
			free(ptr->next);
		     temp=ptr->next;     			 /*ptr->next=temp and 	ptr->next=temp are equal */
		}
		else
		ptr=ptr->next;
	}
}



int main()
{
	
	struct node *head=NULL;
	push(&head,4);
	push(&head,4);
	push(&head,5);
	push(&head,5);
	push(&head,6);
	push(&head,7);
	push(&head,7);
	push(&head,9);
	push(&head,9);
	push(&head,10);
	push(&head,12);
	display(head);
	delete_faltu(head);
	display(head);
	
	return 0;
	
}
