# include<iostream>
# include<stdlib.h>
using namespace std;

struct node
{
	int info;
	struct node *next;
};

void push(struct node **head,int n)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->info=n;
	new_node->next=(*head);
	(*head)=new_node;

}
void find_nth(struct node *head,int n)
{
	int k=0;
	struct node *p=head;
	struct node *q=head;
	struct node *r=head;
	while(p->next!=NULL)
	{
		k++;
		p=p->next->next;
		q=q->next;
	}
	for(int i=0;i<k-n;i++)
    {
	r=r->next;
	}
	cout<<r->info;

}
void display(struct node *head)
{
	while(head!=NULL)
	{
	cout<<head->info;
	cout<<" ";
	head=head->next;
	}
}

int main()
{
    int n;
	struct node *head=NULL;
	push(&head,9);
	push(&head,7);
	cout<<" ";
	push(&head,11);
	cout<<" ";
	push(&head,2);
	cout<<" ";
	push(&head,5);
	cout<<" ";
	push(&head,8);
	cout<<" ";
	push(&head,3);
	cout<<" ";
	display(head);
	cout<<endl;
    cout<<"now enter the postion from middle:"<<endl;
	cin>>n;
	find_nth(head,n);
	return 0;
}

