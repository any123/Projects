# include<iostream>
# include<stdlib.h>
using namespace std;

struct  node
{
	int info;
	node *next;
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

void merge(struct node *head1,struct node *head2)
{
	struct node *temp;
	struct node *p=head1;
	struct node *q=head2;
	while(p!=NULL && q!=NULL)
	{
		p->next=temp;
		q->next=p->next;
		p->next=q;
		
	}
	
}

int main()
{
	char ch='e';
	struct node *head1=NULL;
	struct node *head2=NULL;
	push(&head1,5);
	push(&head1,4);
	push(&head1,3);
	push(&head1,2);
	push(&head1,1);
	push(&head2,12);
	push(&head2,11);
	push(&head2,10);
	push(&head2,9);
	push(&head2,8);
	

	display(head1);	
	display(head2);	
	merge(head1,head2);
	display(head1);
	return 0;
}
