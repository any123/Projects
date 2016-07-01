# include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	node *next;
};
int count(struct node* head)
{
	int count=0;
	while(cur!=NULL)
	{count++; cur=cur->next;
	}
	return count;
}
int getintersectionNode(struct node* head1,struct node* head2)
{
	int c1=count(head1);
	int c2=count(head2);
	int d=c1-c2;
	if(c1>c2)
	{
		d=c1-c2;
		return _play(d,head1,head2);
	}
	else
	{
		d=c2-c1;
		return _play(d,head2,head1);
	}
}

int _play(int d,struct node* h1,struct node* h2)
{
	struct node* cur1=h1,*cur2=h2;
	
	for(int i=0;i<d;i++)
	{
		if(cur1==NULL)
		return -1;
		cur1=cur1->next;
		cur2=cur2->next;
		
	}
	return -1;
}
