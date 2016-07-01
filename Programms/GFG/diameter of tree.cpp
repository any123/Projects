# include<iostream>
# include"E:\Documents\ankit\trees.h"

using namespace std;
int diameter(struct node *tree)
{	if(tree==NULL) return 0;
	int lh=height(tree->left);
	int rh=height(tree->right);

	int ldia=diameter(tree->left);
	int rdia=diameter(tree->right);

	return max(lh+rh+1,max(ldia,rdia));
}


int main()
{
	struct node *r=newn(1);
	r->left=newn(2);
	r->right=newn(3);
	r->left->left=newn(4);
	r->left->right=newn(5);

	cout<<"diameter of the given tree is\n";
	cout<<diameter(r);
	return 0;
}
