#include <iostream>
#include <map>
#include <queue>
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

// Create Tree 1 by filling: 2 4 7 -1 -1 -1 1 8 -1 -1 3 -1 -1
// Create Tree 2 by filling: 2 4 7 6 -1 -1 -1 10 -1 -1 1 4 -1 -1 -1

// Expected answer for tree 1 -> top : 7 4 2 1 3, bottom : 7 4 8 1 3

// Expected answer for tree 2 -> top : 6 7 4 2 1, bottom : 6 7 4 (10, 4) 1
// (of 10 and 4, by convention, 4 is selected as it comes after 10 in as per
// level order traversal)
// So bottom is 6 7 4 4 1

void top_view(Node* root) {
    map<int, int> m;

    queue<pair<int, Node*>> q;
    q.push({0, root});

    while (!q.empty()) {
        pair<int, Node*> pr = q.front();

        q.pop();

        if (!m.count({pr.first})) m.insert({pr.first, pr.second->m_data});

        if (pr.second->left != NULL) q.push({pr.first - 1, pr.second->left});

        if (pr.second->right != NULL) q.push({pr.first + 1, pr.second->right});
    }

    cout << "Top View : ";
    for (auto const& i : m) cout << i.second << " ";
    cout << '\n';
}

void bottom_view(Node* root) {
    map<int, int> m;

    queue<pair<int, Node*>> q;
    q.push({0, root});

    while (!q.empty()) {
        pair<int, Node*> pr = q.front();

        q.pop();

        // Different Part-------------------------
        if (m.count({pr.first})) {
            auto it = m.find({pr.first});
            it->second = pr.second->m_data;
        } else {
            m.insert({pr.first, pr.second->m_data});
        }
        // Different Part-------------------------

        if (pr.second->left != NULL) q.push({pr.first - 1, pr.second->left});

        if (pr.second->right != NULL) q.push({pr.first + 1, pr.second->right});
    }

    cout << "Bottom View : ";
    for (auto const& i : m) cout << i.second << " ";
    cout << '\n';
}

int main() {
    Node* root = create_tree();

    top_view(root);
    bottom_view(root);

    return 0;
}