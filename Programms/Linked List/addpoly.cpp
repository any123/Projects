# include<iostream>
# include<stdlib.h>
using namespace std;

struct node
{
	int p,c;
	node *next;
};

 void push(struct node **head,int po,int co)
 {	struct node *p=(*head);
 	p=(struct node*)malloc(sizeof(struct node));
 	p->c=co;
 	p->p=po;
 	p->next=(*head);
 	(*head)=p;
 }
 
 void print(struct node *head)
 {
 	struct node *p1=head;
 	while(p1!=NULL)
 	{
 		if(p1->next==NULL)
 		cout<<p1->c<<"x"<<p1->p<<" ";
 		else
 		cout<<p1->c<<"x"<<p1->p<<"+"<<" ";
 	p1=p1->next;
 	}
 	cout<<endl;*-
 }
 
 int main()
 {
 	struct node *h=NULL;
 		push(&h,9,0);
 		push(&h,6,1);
 		push(&h,1,2);
 		print(h);
 }
