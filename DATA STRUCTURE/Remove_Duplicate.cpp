#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};
void input(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void remove(Node*& head) {
    int frequency[1001] = {0};
    Node* tmp = head;
    Node* pre = NULL;

    while (tmp != NULL) {
        if (frequency[tmp->val] > 0) {
            pre->next = tmp->next;  
            delete tmp;            
        } else {
            frequency[tmp->val] = 1;
            pre = tmp;
        }
        tmp = pre->next;
    }
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int V;
    while (cin >> V && V != -1) {
        input(head, tail, V);
    }
    remove(head);
    print(head);
    return 0;
}
