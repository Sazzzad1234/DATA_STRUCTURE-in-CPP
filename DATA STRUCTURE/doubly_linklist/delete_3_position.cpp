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
void delete_head(Node*& head,Node*& tail){
    Node* deletenode;
    head=head->next;
    delete deletenode;
    if(head == NULL){
        tail = NULL;
        return;
            }
    head->pre=NULL;
    
}
void delete_tail(Node*& head,Node*&tail){
    Node* deletenode = tail;
tail=tail->pre;
    delete deletenode;
    if(tail == NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_anyposition(Node*head,int idx){
    Node*tmp =head;
    for(int i=0;i<idx;i++){
        tmp=tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->pre=tmp;
    delete deletenode;

}


int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
     
     head->next=a;
     a->pre=head;

     a->next=tail;
     tail->pre=a;
delete_head(head,tail);
     print_forward(head);  
     cout<<endl;
     delete_tail(head,tail);
     print_forward(head);  
     cout<<endl;
     delete_anyposition(head,2);
     print_forward(head);  
     cout<<endl;
    return 0;
}