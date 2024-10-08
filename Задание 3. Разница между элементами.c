#include <stdio.h>
#include <stdlib.h>

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

int findMin(struct Node* root) {
    struct Node* current = root;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current->data;
}

int findMax(struct Node* root) {
    struct Node* current = root;
    while (current && current->right != NULL) {
        current = current->right;
    }
    return current->data;
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

    int minElement = findMin(root);
    int maxElement = findMax(root);
    
    int difference = maxElement - minElement;
    
    printf("The difference between the max and min elements is: %d\n", difference);

    return 0;
}
