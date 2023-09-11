#include <iostream>
using namespace std;

// Node struct is similar to that for linked lists
// The only difference is that here it carriers pointers to two children nodes

struct Node {
    Node* left = NULL;
    Node* right = NULL;
    int m_data;
    Node(int data) : m_data(data){};
};

// Create tree function that works recursively
Node* create_tree() {
    Node* root = NULL;
    cout << "Enter data : ";
    int data;
    cin >> data;

    if (data == -1) return NULL;

    root = new Node(data);

    cout << "Enter left for " << data << '\n';
    root->left = create_tree();
    cout << "Enter right for " << data << '\n';
    root->right = create_tree();

    return root;
}

int main() {
    // For seeing tree 1 and 2 (see attached jpg)

    // Create Tree 1 by filling : 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
    // Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

    Node* root = create_tree();

    return 0;
}