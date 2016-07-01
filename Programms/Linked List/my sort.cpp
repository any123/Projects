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
void sorting(struct node *head1,struct node *head2)
{

	struct node *p=head1,*prev,*a,*x; x=head1;;
	struct node *q=head1;
	struct node *temp=head2,*m;
	int small;
		q=p->next;
	for(int i=0;i<4;i++)
	{	small=x->info;
		while(q!=NULL)
		{
			if(q->info < small)
			{
				small=q->info; a=q; prev=p;
			}
		
			p=p->next; q=q->next;
		}
		prev->next=a->next;
		temp->next=a;
		temp=temp->next;
		
	}
	display(head2);
}



int main()
{
	
	struct node *head1=NULL;
	struct node *head2=NULL;
	push(&head1,8);
	push(&head1,2);
	push(&head1,3);
	push(&head1,4);
	display(head1);
	cout<<endl;
	sorting(head1,head2);

	
	return 0;
	
}
