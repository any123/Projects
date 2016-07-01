#include<bits/stdc++.h>

# include<stack>
# include"trees.h"
using namespace std;
void preorder(struct node *root)
{ struct node *temp=NULL;
	temp=root;
	stack<node*> s;
	while(1)
	{
		while(root)
		{
			cout<<root->data<<" ";
			s.push(root);
			root=root->left;
			
		}
		if(s.empty())
		break;
		root=s.top();
			s.pop();
		
		root=root->right;
	}
}
int main()
{
	struct node *t=newn(1);
	t->left=newn(2);
	t->right=newn(3);
	t->left->left=newn(4);
	t->left->right=newn(5);
	t->right->left=newn(6);
	t->right->right=newn(7);
	
	preorder(t);
}
