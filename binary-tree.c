#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void add_node(struct node *root, int data)
{
    if (root->data > data)
    {
        if (root->left != NULL)
        {
            add_node(root->left, data);
        }
        else
        {
            root->left = create_node(data);
        }
    }
    else
    {
        if (root->right != NULL)
        {
            add_node(root->right, data);
        }
        else
        {
            root->right = create_node(data);
        }
    }
}

int main()
{
    struct node *root = create_node(50);
    add_node(root, 30);
    add_node(root, 20);
    add_node(root, 40);
    add_node(root, 70);
    add_node(root, 60);
    add_node(root, 80);

    return 0;
}
