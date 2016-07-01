# include<iostream>
# include<stdlib.h>

using namespace std;

struct node
{
	char info;
	struct node *next;
};

void push(struct node **head_ref,char n)
{
	struct node *p=(struct node *)malloc(sizeof(struct node ));
	p->info=n;
	p->next=*head_ref;
	*head_ref=p;
}
void display(struct node *head)
{
	struct node *p=head;
	while(p!=NULL)
	{
		cout<<p->info;
		p=p->next;
	}
}


void reverse(struct node *head)
{
	if(head==NULL) return;
		reverse(head->next);
	cout<<head->info;
}


struct node *middle(struct node *head)
{
	struct node *s=head;
	struct node *f=head;
	while(f!=NULL && f->next!=NULL)
	{
		s=s->next;
		f=f->next->next;
	}
	return s;
}

void palindrone(struct node *head)
{
	struct node *p=head,*q=head,*m=head;
	q=middle(p);
	m=q;
	while(q!=NULL)
	{
		reverse(q);	
	}
	while(m!=NULL)
	{
		if(p->info==m->info)
		{
		
		p=p->next;
		m=m->next;
		cout<<"yes it is"<<endl;
		}
	}
	
}

int main()
{
	struct node *head=NULL;
	struct node *p;
	push(&head,'r');
	push(&head,'a');
	push(&head,'d');
	push(&head,'a');
	push(&head,'r');
	display(head); cout<<endl;
	p=middle(head);
	cout<<p->info<<endl;
	palindrone(head);
	display(head);
	return 0;
}













