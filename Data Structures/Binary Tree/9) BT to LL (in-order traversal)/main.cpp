#include <iostream>
#include <list>
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

// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// For tree 1 , the expected ans is 7 4 2 8 1 3
// For tree 2 , the expected ans is 6 7 4 10 2 4 1

void convert_to_DLL(Node* root, Node*& head, Node*& previous) {
    if (root == NULL) return;
    convert_to_DLL(root->left, head, previous);
    if (previous == NULL) {
        head = root;
    } else {
        root->left = previous;
        previous->right = root;
    }
    previous = root;
    convert_to_DLL(root->right, head, previous);
}

int main() {
    Node* root = create_tree();

    Node* previous = NULL;
    Node* head = NULL;

    convert_to_DLL(root, head, previous);

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->m_data << " ";
        temp = temp->right;
    }

    return 0;
}