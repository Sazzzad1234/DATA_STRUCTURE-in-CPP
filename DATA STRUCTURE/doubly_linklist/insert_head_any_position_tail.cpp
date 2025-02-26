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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
     
     head->next=a;
     a->pre=head;

     a->next=tail;
     tail->pre=a;
     insrt_at_head(head,tail,100);
     print_forward(head);
     cout<<endl;
     insert_at_tail(head,tail,200);
     print_forward(head);
     cout<<endl;
     insert_at_any_position(head,2,300);
     print_forward(head);  
    return 0;
}