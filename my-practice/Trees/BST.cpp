// Searching, Insertion, Deletion from a BST tree

#include <bits/stdc++.h>
using namespace std;

#define e endl
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

struct node {
    int data;
    node *left, *right;
};

node* newNode(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}

void inOrder(node* root)
{
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data;
        inOrder(root->right);
    }
}

// INSERTING
node* insert(node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    return node;
}

node* minValue(node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// DELETION
node* deleteNode(node* root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    // if the key is same as the root then :
    else {
        if (root->left == NULL) {
            node* temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL) {
            node* temp = root->left;
            free(root);
            return temp;
        }

        // node with 2 children, get the inOrder successor
        else {
            node* temp = minValue(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

// SEARCHING
node* search(node* root, int key)
{
    if (root == NULL || root->key = key)
        return root;
    if (root->key < key)
        return search(root->right, key);
    return search(root->left, key);
}

int main()
{
    fastio;
    node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    root = deleteNode(root, 20);
    inOrder(root);

    root = deleteNode(root, 30);
    inOrder(root);

    root = search(root, 40);
    cout << root << e;

    return 0;
}
