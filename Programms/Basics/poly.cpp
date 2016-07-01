# include<iostream>
# include<math.h>
# include<stdlib.h>
using namespace std;
struct node
{
	int power;
	int coeff;
	struct node *next;
};

void push(struct node **head,int p,int c)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node ));
	new_node->power=p;
	new_node->coeff=c;
	new_node->next=(*head);
	(*head)=new_node;
}

void display(struct node *head)
{	char x;
	struct node *p=head;
	while(p!=NULL)
	{
		cout<<p->coeff<<"x"<<p->power<<" ";
		p=p->next;
	}
	cout<<endl;
}
void evaluate(struct node *head,int x)
{
	struct node *p=head; int sum=0;
	while(p!=NULL)
	{
		sum=sum+p->coeff*pow(x,p->power);
		p=p->next;
	}
	cout<<sum<<" "<<endl;
}
void add(struct node *head,struct node *head1)
{
	struct node *p=head;
	struct node *q=head1;
	
	while(p!=NULL || q!=NULL)
	{
		if(p->power==q->power)
		{
				q->coeff=p->coeff+q->coeff;
				q->power=p->power;
		}
		else
		if(p->power>q->power)
		{
			q->power=p->power;
			q->coeff=p->coeff;
		}
		else
		if(q->power >p->power)
		{
			q->power=q->power;
			q->coeff=q->coeff;	
		}
		p=p->next;
		q=q->next;
		
	}
	display(head1);
}


int main()
{	int x;
	struct node *head=NULL;	
	struct node *head1=NULL;		 
	push(&head,1,3);				 
	push(&head,2,4);				 
	push(&head,3,5);				 
	display(head);	
	cin>>x;
	evaluate(head,x);
	push(&head1,1,1);
	push(&head1,2,2);
	push(&head1,3,4);
	display(head1);	
	evaluate(head1,x);
	add(head,head1);
}















