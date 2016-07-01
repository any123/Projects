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
void display(struct node *head)
{
	while(head!=NULL)
	{
	cout<<head->info<<" ";
	head=head->next;
	}
}

void sorting(struct node *head)
{
	struct node *p=head,*q;
	q=p->next;
	while(p!=NULL)
	{
		while(q!=NULL)
		{
			if(q->info<p->info)
			swap(&q->info,&p->info);
			q=q->next;
		}
		p=p->next;
	}
	display(head);	
		
}



int main()
{
	
	struct node *head=NULL;
	push(&head,8);
	push(&head,4);
	push(&head,3);
	push(&head,6);
	push(&head,2);
	display(head);
	cout<<endl;
	sorting(head);
	
	return 0;
	
}
