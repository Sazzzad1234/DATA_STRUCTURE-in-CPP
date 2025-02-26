#include<bits/stdc++.h>
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
void insert_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void delete_index(Node*& head, int index) {
    if (head == NULL || index < 0) {
        return;
        }
    if (index == 0) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    Node* tmp = head;
    for (int i = 0; i < index - 1 && tmp !=NULL; i++) {
        tmp = tmp->next;
    }
    if (tmp != NULL && tmp->next != NULL) {
        Node* deleteNode = tmp->next;
        tmp->next = deleteNode->next;
        delete deleteNode;
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
    int Q;
    cin >> Q;
    Node* head = NULL;
    for (int i=0; i<Q;i++) {
        int X,V;
        cin >>X>>V;
        if(X==0){
            insert_head(head,V);
        }else if(X==1) {
            insert_tail(head,V);
        }else if(X==2) {
            delete_index(head,V);
        }
        print(head);
    }
    return 0;
}
