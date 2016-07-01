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
	*head_ref=new_node
}

int count(struct node *head_ref)
{
	int count=0;
	struct node *current=head_ref;
	while(current!=NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}


int main()
{
	int n,a;
	struct node *head=NULL;
	char ch;
	do
	{
	cout<<"enter a new node"<<endl;
	cin>>n;
	push(&head,n);
	cout<<"want to enter more"<<endl;
	cin>>ch;
	}while(ch=='y'||ch=='Y');
	a=count(head);
	cout<<"the number of nodes are"<<endl;
	cout<<a;
	return 0;
}
	
	
	

