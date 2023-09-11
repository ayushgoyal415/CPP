#include <iostream>
#include <vector>
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

void left_view(Node* root, vector<Node*>& A, int level) {
    if (root == NULL) return;
    if (A.size() <= level) A.resize(level + 1);
    if (A[level] == NULL) A[level] = root;
    left_view(root->left, A, ++level);
    level--;
    left_view(root->right, A, ++level);
}
void right_view(Node* root, vector<Node*>& A, int level) {
    if (root == NULL) return;
    if (A.size() <= level) A.resize(level + 1);
    A[level] = root;
    right_view(root->left, A, ++level);
    level--;
    right_view(root->right, A, ++level);
}

// See picture for tree 1
// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// Expected answer for tree 1 -> left : 2 4 7, right : 2 1 3
// Expected answer for tree 2 -> left : 2 4 7 6, right : 2 1 4 6

int main() {
    Node* root = create_tree();
    vector<Node*> A;

    left_view(root, A, 0);
    cout << "\nLeft View : ";
    for (auto const& i : A) cout << i->m_data << " ";

    A.clear();

    right_view(root, A, 0);
    cout << ", Right View : ";
    for (auto const& i : A) cout << i->m_data << " ";
    cout << "\n\n";

    return 0;
}