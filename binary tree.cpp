//C or c++ Program for different tree traversals
#include <stdio.h>
#include <stdlib.h>
/* A binary tree node has data, pointer to left child and a pointer to right child */

struct node{
    int data;
    struct node* left;
    struct node* right;
};

/*Helper function that allocates a new node with the given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
};

/*Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
    if(node==NULL)
        return;
    /* first recur on left child*/
    printInorder(node->left);
    /* then print the data of node*/
    printf("%d ", node->data);
    /* now recur on right child */
    printInorder(node->right);
    // perlu diketahui, bahwa jika urutan print berbeda maka outputnya juga akan berbeda!//
}
void printPreorder(struct node* node)
{
    if(node==NULL)
        return;
    /* first recur on left child*/
    printf("%d ", node->data);
    /* then print the data of node*/
    printPreorder(node->left);
    /* now recur on right child */
    printPreorder(node->right);
    // perlu diketahui, bahwa jika urutan print berbeda maka outputnya juga akan berbeda!//
}
void printPostorder(struct node* node)
{
    if(node==NULL)
        return;
    /* first recur on left child*/
    printPostorder(node->left);
    /* then print the data of node*/
    printPostorder(node->right);
    /* now recur on right child */
    printf("%d ", node->data);
    // perlu diketahui, bahwa jika urutan print berbeda maka outputnya juga akan berbeda!//
}
void printRLInorder(struct node* node)
{
    if(node==NULL)
        return;
    /* first recur on left child*/
    printRLInorder(node->right);
    /* then print the data of node*/
    printf("%d ", node->data);
    /* now recur on right child */
    printRLInorder(node->left);
    // perlu diketahui, bahwa jika urutan print berbeda maka outputnya juga akan berbeda!//
}
void printRLPreorder(struct node* node)
{
    if(node==NULL)
        return;
    /* first recur on left child*/
    printf("%d ", node->data);
    /* then print the data of node*/
    printRLPreorder(node->right);
    /* now recur on right child */
    printRLPreorder(node->left);
    // perlu diketahui, bahwa jika urutan print berbeda maka outputnya juga akan berbeda!//
}
void printRLPostorder(struct node* node)
{
    if(node==NULL)
        return;
    /* first recur on left child*/
    printRLPostorder(node->right);
    /* then print the data of node*/
    printRLPostorder(node->left);
    /* now recur on right child */
    printf("%d ", node->data);
    // perlu diketahui, bahwa jika urutan print berbeda maka outputnya juga akan berbeda!//
}

/* Driver code*/
int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    //Function call
    printf("Inorder Traversal: ");
    printInorder(root);
    printf("\nPreorder Traversal: ");
    printPreorder(root);
    printf("\nPostorder Traversal: ");
    printPostorder(root);
    printf("\nRight - Left Inorder Traversal: ");
    printRLInorder(root);
    printf("\nRight - Left Preorder Traversal: ");
    printRLPreorder(root);
    printf("\nRight - Left Postorder Traversal: ");
    printRLPostorder(root);
    getchar();
    return 0;
}
