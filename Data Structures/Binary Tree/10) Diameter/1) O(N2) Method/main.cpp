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

// Diameter of a binary tree is the number of nodes in the largest path between
// 2 leaf nodes

int height(Node* root) {
    if (root == NULL) return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(Node* root) {
    if (root == NULL) return 0;
    int dl = diameter(root->left);
    int dr = diameter(root->right);
    int dp = height(root->left) + height(root->right) + 1;
    return max(dp, max(dl, dr));
}

// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// For tree 1 , the expected ans is 5
// For tree 2 , the expected ans is 6

int main() {
    Node* root = create_tree();
    cout << diameter(root) << '\n';
    return 0;
}