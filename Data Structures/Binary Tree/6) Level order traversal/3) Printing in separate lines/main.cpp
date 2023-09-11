#include <iostream>
#include <queue>

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

void level_order(Node* root) {
    queue<Node*> q;
    q.push(root);

    // Using NULL to find the ending of line
    q.push(NULL);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // Check---------------------------
        if (curr == NULL) {
            if (q.empty()) break;
            curr = q.front();
            q.pop();
            q.push(NULL);
            cout << '\n';
        }
        // Check---------------------------

        cout << curr->m_data << " ";
        if (curr->left != NULL) q.push(curr->left);
        if (curr->right != NULL) q.push(curr->right);
    }
}


// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// Expected level-order traversal for tree 1 :
// 2
// 4 1
// 7 8 3

// Expected level-order traversal for tree 2 :
// 2
// 4 1
// 7 10 4
// 6


int main() {
    Node* root = create_tree();
    level_order(root);

    return 0;
}