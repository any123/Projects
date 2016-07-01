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
void printReverse(struct node* head)
{
  // Base case  
  if(head == NULL)
    return;

  // print the list after head node
  printReverse(head->next);

  // After everything else is printed, print head
  cout<<head->info;
}
void display(struct node *head)
{
	while(head!=NULL)
	{
	cout<<head->info<<" ";
	head=head->next;
	}
}
  void play(struct node *head,int n)
  {
  	struct node *p=head;
  	for(int i=0;i<n;i++)
  	{	
  	cout<<p->info;
  	p=p->next;
  	}
  	
  	printReverse(p);
  }


	int main()
	{
		struct node *head1=NULL;
		push(&head1,9);
		push(&head1,8);
		push(&head1,7);
		push(&head1,6);
		push(&head1,5);
		push(&head1,4);
		push(&head1,2);
		push(&head1,1);
		display(head1);
		play(head1,3);
		
		return 0;
	}
