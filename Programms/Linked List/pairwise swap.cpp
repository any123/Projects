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

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void fun(struct node *head)
{
	struct node *ptr=head;
	while(ptr!=NULL && ptr->next!=NULL)
	{
		swap(&ptr->info,&ptr->next->info);
		ptr=ptr->next->next;
	}
	
}

void display(struct node *head)
{
	while(head!=NULL)
	{
	cout<<head->info<<" ";
	head=head->next;
	}
}



int main()
{
	
	struct node *head=NULL;
	push(&head,4);
	push(&head,6);
	push(&head,7);
	push(&head,9);
	push(&head,10);
	push(&head,12);
	display(head);
	fun(head);
	display(head);
	
	return 0;
	
}
