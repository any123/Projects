
# include<iostream>
# include<stdlib.h>
using namespace std;
 
/* A linked list node */
struct node
{
  int data;
  struct node *next;
};
 
/* deletes alternate nodes of a list starting with head */
void deleteAlt(struct node *head)
{
  
  
  struct node *temp=head;
  struct node *ptr;
  while(temp!=NULL && ptr!=NULL)
  {
  	
  	temp->next=ptr->next;
  	free(temp);
  	temp=temp->next;
  	if(temp!=NULL)
  	{
  		ptr=temp->next;
  	}
  }
  

}


 
/* UTILITY FUNCTIONS TO TEST fun1() and fun2() */
/* Given a reference (pointer to pointer) to the head
  of a list and an int, push a new node on the front
  of the list. */
void push(struct node** head_ref, int new_data)
{
  /* allocate node */
  struct node* new_node =
          (struct node*) malloc(sizeof(struct node));
 
  /* put in the data  */
  new_node->data  = new_data;
 
  /* link the old list off the new node */
  new_node->next = (*head_ref);
 
  /* move the head to point to the new node */
  (*head_ref)    = new_node;
}
 
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
  while(node != NULL)
  {
    cout<< node->data;
    node = node->next;
  }
}
 
/* Drier program to test above functions */
int main()
{
  int arr[100];  
 
  /* Start with the empty list */
  struct node* head = NULL;
 
  /* Using push() to construct below list
    1->2->3->4->5  */
  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2); 
  push(&head, 1);    
 
  cout<<"\n List before calling deleteAlt()";
  printList(head);
 
  deleteAlt(head);
 
  cout<<"\n List after calling deleteAlt()";
  printList(head);
 
  
  return 0;
}
 

