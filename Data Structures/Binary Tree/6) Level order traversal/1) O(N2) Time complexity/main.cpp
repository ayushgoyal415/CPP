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

int height(Node* root) {
    if (root == NULL) return 0;
    return height(root->left) + height(root->right) + 1;
}

// Time Complexity of this method is O(N2)
void level_order(Node* root, int level) {
    if (root == NULL) return;
    if (level == 1) cout << root->m_data << " ";
    if (level > 1) {
        level_order(root->left, --level);
        level++;
        level_order(root->right, --level);
    }
}

// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// Expected level-order traversal for tree 1 : 2 4 1 7 8 3
// Expected level-order traversal for tree 2 : 2 4 1 7 10 4 6

int main() {
    Node* root = create_tree();
    int n = height(root);

    for (int i = 1; i <= n; i++) level_order(root, i);

    return 0;
}