
struct node
{
	int data;
	node *left,*right;
};


struct node *newn(int x)
{
	struct node *n=new node;
	n->data=x;
	n->left=n->right=NULL;
	return n;
}

int max(int a,int b)
{
	return (a>=b)?a:b;
}

int height(struct node *node)
{
	if(node==NULL) return 0;
	
	int lh=height(node->left);
	int rh=height(node->right);

	return (lh>rh?lh+1:rh+1);
	
}



