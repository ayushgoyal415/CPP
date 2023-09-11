#include <limits.h>

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

int max_ele(Node* root) {
    if (root == NULL) return INT_MIN;
    return max(root->m_data, max(max_ele(root->left), max_ele(root->right)));
}
int min_ele(Node* root) {
    if (root == NULL) return INT_MAX;
    return min(root->m_data, min(min_ele(root->left), min_ele(root->right)));
}

// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// For tree 1 , the expected ans (max, min) is 8, 1
// For tree 2 , the expected ans (max, min) is 10, 1

int main() {
    Node* root = create_tree();

    cout << "MAX element : " << max_ele(root) << '\n';
    cout << "MIN element : " << min_ele(root) << '\n';

    return 0;
}