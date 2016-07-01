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
/* Function to get the middle of the linked list*/
void printMiddle(struct node *head)
{
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;
 
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        cout<< slow_ptr->info;
    }
}
 

int main()
{
	struct node *head;
	char ch;
	int n;
	cout<<"enter a new node"<<endl;
	cin>>n;
	do
	{
		push(&head,n);
		cout<<"wnat to enter more"<<endl;
		cin>>ch
	}while(ch=='y'|}ch=='Y');

cout<<"the middle element is"<<" "<<printMiddlemiddle(head);	
}

 return 0;
}
