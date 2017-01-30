# include<bits/stdc++.h>

using namespace std;

struct node
{
  struct node *left,*right;
  int data;

};

int height(struct node * node)
{

  if(node == NULL)
       return 0;

   /* If tree is not empty then height = 1 + max of left
      height and right heights */
   return 1 + max(height(node->left), height(node->right));
}


int diameter(struct node* node)
{
    if(node==NULL)
    return 0;

    int lheight=height(node->left);
    int rheight =height(node->right);


  int ldiameter = diameter(node->left);
 int rdiameter = diameter(node->right);

 return max(lheight + rheight + 1, max(ldiameter,rdiameter));
}


node* push(int n)
{
   struct node* node = (struct node*)malloc(sizeof(struct node));

    node->data=n;

   node->left=NULL;
   node->right=NULL;

        return node;
}
int main()
{
   int num_of_nodes,rute;
   scanf("%d%d",&num_of_nodes,&rute);

   struct node *root = NULL,*node;
    root=push(rute);
        num_of_nodes=num_of_nodes-1;


    while(num_of_nodes--)
    {
      string s; int node_value; cin>>s; scanf("%d",&node_value);
       node=root;
      for(int i=0;i<s.length();i++)
      {

        if(s[i]=='L')
       {if(node->left==NULL)
        node->left=push(0);
        node=node->left;
        }
        else
        {
            if(node->right==NULL)
        node->right=push(0);
        node=node->right;
        }
    }
     node->data=node_value;


    }
cout<<root->left->data<<" "<<root->right->data;
cout<<endl<<root->left->left->data<<" "<<root->left->right->data;

cout<<endl<<"diameter is: "<<diameter(root);

}
