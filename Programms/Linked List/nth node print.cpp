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
}
int display_nth_node(struct node *head,int n)
{
	struct node *ptr=head;
	int c=0;
	while(ptr!=NULL)
	{
		if(c==n)
		return ptr->info;
		ptr=ptr->next;
		c++;
	}
}
int main()
{
	struct node *head;
	char ch;
	int n,pos;
		do
	{
		
		cout<<"enter a new node"<<endl;
		cin>>n;
		push(&head,n);
		cout<<"wnat to enter more"<<endl;
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	
	cout<<"enter the position starting from zero you want to display"<<endl;
	cin>>pos;
	cout<<display_nth_node(head,pos);	
	
	return 0;
}
