#include <stdio.h>
#include <stdlib.h>
typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;

} Tree;
Tree *tree(int data)
{
    Tree *root;
    root = (Tree *)malloc(sizeof(Tree));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void addnode(Tree *root, int data)
{
    Tree *tmp = root;
    Tree *node = (Tree *)malloc(sizeof(Tree));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    while (tmp != NULL)
    {
        if (tmp->data > data)
        {
            if (tmp->right == NULL)
            {
                tmp->right = node;
                return;
            }
            else
                tmp = tmp->right;
        }
        else
        {
            if (tmp->left == NULL)
            {
                tmp->left = node;
                return;
            }
            else
                tmp = tmp->left;
        }
    }
}
void printTree(Tree *root)
{
    // Tree *tmp = root;
    if (root == NULL)
        return;
    printf("%d ", root->data);
    printTree(root->right);
    printTree(root->left);
}
void deleteNode(Tree *root, int data)
{
    Tree *tmp = root;
    

    while (tmp != NULL)
    {

        if (tmp->data > data)
        {
            if (tmp->right == NULL)
            {
                return;
            }
            else
                tmp = tmp->right;
        }
        else
        {
            if (tmp->left == NULL)
            {
                return;
            }
            else
                tmp = tmp->left;
        }
    }
}
int main()
{
    Tree *root;
    root = tree(1);
    addnode(root, 2);
    addnode(root, -1);
    addnode(root, 5);
    printTree(root);
    printf("\n");

    printTree(root);
    printf("\n");
}