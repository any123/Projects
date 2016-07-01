# include<iostream>
# include<stdlib.h>

using namespace std;

struct node
{
	int coef,pow;
	struct node *next;
};

void push(struct node **head,int p,int c)
{
	struct node *newn=(struct node*)malloc(sizeof(struct node));
	newn->next=(*head);
	newn->coef=c;
	newn->pow=p;
	(*head)=newn;
}
void display(struct node *head)
{
	struct node *p=head;
	while(p!=NULL)
	{
		cout<<p->coef<<"x^"<<p->pow;
		if(p->coef>0)
		cout<<"+";
		p=p->next;
	}
	cout<<endl;
}
void mul(struct node *h1,struct node *h2,struct node *j3)
{
	struct node *p=h1;
	struct node *q=h2,*a;
	struct node *r=j3;
	a=q;

	while(p!=NULL)
	{
		q=a;
		while(q!=NULL)
		{
			push(&r,p->pow+q->pow,p->coef*q->coef);
			q=q->next;
		
		}
		p=p->next;
	}
	display(r);
}


int main()
{
	struct node *p=NULL;
	struct node *q=NULL;
	struct node *r=NULL;
	push(&p,0,4);
	push(&p,1,2);
	push(&p,2,3);
	display(p);
	push(&q,0,4);
	push(&q,2,6);
	display(q);
	mul(p,q,r);
	display(r);
	
	
}
