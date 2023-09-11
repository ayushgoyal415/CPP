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

// O(N) time complexity can be achieved by modifying the height function
int msf = 0;
int height_dia(Node* root) {
    if (root == NULL) return 0;
    int lh = height_dia(root->left);
    int rh = height_dia(root->right);
    //------------------------------
    msf = max(msf, lh + rh + 1);
    //------------------------------
    return max(lh, rh) + 1;
}

// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// For tree 1 , the expected ans is 6
// For tree 2 , the expected ans is 7

int main() {
    Node* root = create_tree();

    return 0;
}