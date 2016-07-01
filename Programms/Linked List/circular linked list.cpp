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
	struct node *p=(struct node *)malloc(sizeof(struct node ));
	struct node *temp=*head_ref;
	p->info=n;
	p->next=*head_ref;
	if(*head_ref!=NULL)
	{
		while(temp->next!=*head_ref)
		temp=temp->next;
		temp->next=p;
	}
	else
	p->next=p;
	*head_ref=p;
	
};

void printList(struct node *head)
{
	struct node *temp=head;
	if(head!=NULL)
	{
		do  
		{
			cout<<temp->info;
			temp=temp->next;
		}while(temp!=head);
	}
}


int main()
{
	struct node *head=NULL;
	  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2); 
  push(&head, 1);    
  printList(head);
 return 0;
}
