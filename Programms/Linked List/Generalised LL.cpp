#include<stdio.h>
	#include<malloc.h>
struct node
{
    int op;
    union
    {
        int info;
        struct node *sublist;
    }ele;
    struct node * next;
};
struct node * addsub(int size)
{
    struct node * head=NULL,*temp;
    while(size--)
    {
        struct node * n=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&n->ele.info);
        n->op=0;
        n->next=NULL;
        if(head==NULL)
        {
            head=n;
            temp=n;
        }
        else
        {
            temp->next=n;
            temp=n;
        }
    }
            return head;
}
void add(struct node **head)
{
    int choice,size;
    struct node * n=(struct node *)malloc(sizeof(struct node)),*temp=*head;
    n->next=NULL;
    printf("enter 1 for single element and 2 for nexted list\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("enter the element\n");
        n->op=0;
        scanf("%d",&n->ele.info);
    }
    else
    {
        n->op=1;
        printf("enter the size\n");
        scanf("%d",&size);
        printf("enter the element\n");
        n->ele.sublist=addsub(size);
    }
    if(*head==NULL)
    {
        *head=n;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
}
void print(struct node * head)
{
    while(head!=NULL)
    {
        if(head->op==0)
        {
            printf("%d\n",head->ele.info);
        }
        else
        {
            struct node * temp=head->ele.sublist;
            while(temp!=NULL)
            {
                printf("%d ",temp->ele.info);
                temp=temp->next;
            }
            printf("\n");
        }
        head=head->next;
    }
}
int main()
{
    struct node * head=NULL;
    int size;
    scanf("%d",&size);
    while(size--)
    {
        add(&head);
    }
    print(head);
}
