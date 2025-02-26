#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* pre;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void print_forward(Node* head) {
    cout << "L -> ";
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node* tail) {
    cout << "R -> ";
    Node* tmp = tail;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
    cout << endl;
}
bool insert_at_index(Node*& head, Node*& tail, int index, int val){
    if (index < 0) return false;
    Node* newnode = new Node(val);
    if (index == 0){
        if (head == NULL){
            head = tail = newnode;
        } else{
            newnode->next = head;
            head->pre = newnode;
            head = newnode;
        }
        return true;
    }
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL && count < index - 1) {
        tmp = tmp->next;
        count++;
    }
    if (tmp == NULL){
        return false;
    }
    if (tmp->next == NULL) { 
        tmp->next = newnode;
        newnode->pre = tmp;
        tail = newnode;
    } else {
        newnode->next = tmp->next;
        tmp->next->pre = newnode;
        tmp->next = newnode;
        newnode->pre = tmp;
    }
    return true;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        if (!insert_at_index(head, tail, X, V)) {
            cout << "Invalid" << endl;
        } else {
            print_forward(head);
            print_reverse(tail);
        }
    }
    return 0;
}
