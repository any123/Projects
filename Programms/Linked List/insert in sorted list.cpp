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

void play(struct node *head,int a)
{	struct node *newnode=(struct node *)malloc(sizeof(struct node ));
	struct node *curr=head;
	struct node *prev=head;
	prev=curr;
	curr=curr->next;
	newnode->info=a;
	while(curr!=NULL && prev->next!=NULL)
	{
		if(a>=prev->info &&a<=curr->info)
		{
		
			prev->next=newnode->next;
			newnode=prev;
			newnode->next=curr;
		}
		curr=curr->next;
		prev=prev->next;	
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
		struct node *head1=NULL;
		push(&head1,9);
		push(&head1,8);
		push(&head1,7);
		push(&head1,6);
		push(&head1,5);
		push(&head1,4);
		push(&head1,2);
		push(&head1,1);
		display(head1);
		play(head1,3);
		cout<<endl;
		display(head1);
		return 0;
	}
