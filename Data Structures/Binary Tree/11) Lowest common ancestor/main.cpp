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

// Find a lowest common ancestor of two nodes
// Note that by convention the lowest ancestor of a node is the node itself

Node* lca(Node* root, int const& n1, int const& n2) {
    if (root == NULL) return NULL;
    if (root->m_data == n1 || root->m_data == n2) return root;

    Node* left = lca(root->left, n1, n2);
    Node* right = lca(root->right, n1, n2);

    if (left == NULL) return right;
    if (right == NULL) return left;

    return root;
}

// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// For tree 1 , the lowest common ancestor for nodes 8 and 3 is 1
// For tree 2 , the lowest common ancestor for nodes 6 and 10 is 4
// For tree 2 , the lowest common ancestor for nodes 6 and 7 is 7

int main() {
    Node* root = create_tree();

    cout << "Enter the Nodes : ";
    int n1, n2;
    cin >> n1 >> n2;

    Node* ans = lca(root, n1, n2);

    cout << ans->m_data << '\n';

    return 0;
}