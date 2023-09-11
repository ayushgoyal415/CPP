#include <iostream>
using namespace std;

struct Node {
    Node* left = NULL;
    Node* right = NULL;
    int m_data;

    Node(int data) : m_data(data){};
};

Node* create_tree() {
    Node* root = NULL;
    int data;
    cin >> data;

    if (data == -1) return NULL;

    root = new Node(data);

    root->left = create_tree();
    root->right = create_tree();

    return root;
}

void in_order(Node* root) {
    if (root == NULL) return;
    // Using LNR recursion
    in_order(root->left);
    cout << root->m_data << " ";
    in_order(root->right);
}

void pre_order(Node* root) {
    if (root == NULL) return;
    // Using NLR recursion
    cout << root->m_data << " ";
    pre_order(root->left);
    pre_order(root->right);
}

void post_order(Node* root) {
    if (root == NULL) return;
    // Using LRN recursion
    post_order(root->left);
    post_order(root->right);
    cout << root->m_data << " ";
}

int main() {
    // Create Tree 1 by filling : 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
    // Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

    // Expected traversals for tree 1 are :
    // In-order : 7 4 2 8 1 3
    // Pre-order : 2 4 7 1 8 3
    // Post-order : 7 4 8 3 1 2

    // Expected traversals for tree 2 are :
    // In-order : 6 7 4 10 2 4 1
    // Pre-order : 2 4 7 6 10 1 4
    // Post-order : 6 7 10 4 4 1 2

    Node* root = create_tree();

    cout << "Inorder Traversal : ";
    in_order(root);

    cout << "\nPreorder Traversal : ";
    pre_order(root);

    cout << "\nPost Order Traversal : ";
    post_order(root);

    return 0;
}