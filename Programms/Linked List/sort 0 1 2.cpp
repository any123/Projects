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

int count(struct node *head1)
{	int no=0,n1=0,n2=0;
	struct node *p1=head1;
	while(p1->next=NULL)
	{
	if(p1->info==0)
	no++;
	else
	if(p1->info==1)
	n1++;
	else
	n2++;
	}p1=p1->next;
	static int i; static int j; static int k;
	p1=head1;
	for(i=0;i<no;i++)
	{
		p1->info=0;
		p1=p1->next;
	}
	for(j=i+1;j<n1;j++)
	{
		p1->info=1; 
		p1=p1->next;
	}
	for(k=j+1;k<n1;k++)
	{
		p1->info=2; 
		p1=p1->next;
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
		push(&head1,1);
		push(&head1,2);
		push(&head1,0);
		push(&head1,0);
		push(&head1,2);
		push(&head1,1);
		push(&head1,1);
		push(&head1,2);
		display(head1);
		int a=count(head1);
		cout<<endl;
		cout<<a;
		display(head1);
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
