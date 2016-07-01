# include<iostream>
# include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

void push(struct Node **head_ref,int n)
{
	struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
	new_node->data=n;
	new_node->next=*head_ref;
	*head_ref=new_node;
	
}
int main()
{
	struct Node *p1,*p2,*p3;
	push(&p1,12);
	push(&p2,34);
	push(&p3,34);
	p1->next=p2;
	p2->next=p3;
	p3->next=0;
	cout<<p1->data<<endl<<p1->next->data<<endl;
	cout<<p2->data<<endl<<p2->next->data<<endl;
	cout<<p1->next->next->data<<endl;
	cout<<p3->data<<endl;
	return 0;
	
}



