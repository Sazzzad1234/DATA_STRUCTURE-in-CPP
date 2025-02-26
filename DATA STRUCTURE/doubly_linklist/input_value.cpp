#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* pre;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void print_forward(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<< tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insrt_at_head(Node* &head,Node*&tail ,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->pre=newnode;
    head= newnode;
}
void insert_at_tail(Node*& head,Node*& tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre= tail;
    tail=newnode;
}
void insert_at_any_position(Node*& head,int idx,int val){
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<idx;i++){
tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next->pre = newnode;
    tmp->next = newnode;
    newnode->pre = tmp;
}
int main() {
    Node* head =NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin>> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
     print_forward(head);  
    return 0;
}