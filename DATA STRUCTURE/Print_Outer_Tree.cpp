#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }
    queue<Node*> q;
    if (root != NULL)
        q.push(root);
    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myleft, * myright;
        if (l == -1) {
            myleft = NULL;
        } else {
            myleft = new Node(l);
        }

        if (r == -1) {
            myright = NULL;
        } else {
            myright = new Node(r);
        }

        f->left = myleft;
        f->right = myright;

        if (f->left) {
            q.push(f->left);
        }
        if (f->right) {
            q.push(f->right);
        }
    }
    return root;
}

void printLeftBoundary(Node* root, vector<int>& result) {
    Node* curr = root;
    while (curr) {
        if (curr->left || curr->right) {
            result.push_back(curr->val);
        }
        if (curr->left) {
            curr = curr->left;
        } else {
            curr = curr->right;
        }
    }
}

void printLeafNodes(Node* root, vector<int>& result) {
    if (!root) return;
    if (!root->left && !root->right) {
        result.push_back(root->val);
        return;
    }
    printLeafNodes(root->left, result);
    printLeafNodes(root->right, result);
}

void printRightBoundary(Node* root, vector<int>& result) {
    Node* curr = root;
    stack<int> temp;
    while (curr) {
        if (curr->left || curr->right) {
            temp.push(curr->val);
        }
        if (curr->right) {
            curr = curr->right;
        } else {
            curr = curr->left;
        }
    }
    while (!temp.empty()) {
        result.push_back(temp.top());
        temp.pop();
    }
}

void printOuterNodes(Node* root) {
    if (!root) return;

    vector<int> result;

    // Collect left boundary excluding root and leaf nodes
    if (root->left) {
        printLeftBoundary(root->left, result);
    }

    // Add root node
    result.push_back(root->val);

    // Collect all leaf nodes
    printLeafNodes(root, result);

    // Collect right boundary excluding root and leaf nodes
    if (root->right) {
        printRightBoundary(root->right, result);
    }

    // Print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    Node* root = input_tree();
    printOuterNodes(root);
    return 0;
}
