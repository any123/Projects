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
void printLevelOrder(struct node * root)
{
        if(root==NULL)
        return;
        struct node* node =root,*temp;

        queue<struct node*>q;
        q.push(root);
        //q.push(NULL);

        while(!q.empty())
        {
            temp=q.front();
        q.pop();
            cout<<temp->data<<" ";

            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);

        }


}
/* Driver program to test above functions*/
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);

    printf("Level Order traversal of binary tree is \n");
    printLevelOrder(root);

    return 0;
}
