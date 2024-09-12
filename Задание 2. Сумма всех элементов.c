#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int sumTree(struct Node* root) {
    if (root == NULL)
        return 0;
    return root->data + sumTree(root->left) + sumTree(root->right);
}

int main() {
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->left = createNode(13);
    root->right->right = createNode(18);

    root->left->left->left = createNode(1);
    root->left->right->left = createNode(6);

    int sum = sumTree(root);
    
    printf("The sum of all elements in the tree is: %d\n", sum);

    return 0;
}
