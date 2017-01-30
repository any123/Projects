// Iterative Queue based C program to do level order traversal
// of Binary Tree
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};


struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);
}
int printLevelOrder(struct node * root)
{
        int cur_sum=0,max_sum=INT_MIN;

        queue<struct node*>q;  struct node * temp;
        q.push(root);
        q.push(NULL);

        int height = 0;
        cur_sum=0;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            if(cur_sum>max_sum)
            max_sum=cur_sum;

            cur_sum=0;

            if(!q.empty())
            q.push(NULL);

        }
        else
        {
                 cur_sum=cur_sum+ temp->data;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);

        }
    }

    return max_sum;
  } /*

                                                1
                                        2               30
                                      4   5         5     7
/* Driver program to test above functions*/
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(30);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(5);
    root->right->right= newNode(7);

    printf("Maximum sum of tree using Level Order traversal of binary tree is \n");
   cout<< printLevelOrder(root);

    return 0;
}
