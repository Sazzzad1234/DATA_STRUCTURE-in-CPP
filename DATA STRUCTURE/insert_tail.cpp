#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
int val;
Node* next;
Node(int val){
    this->val=val;
    this->next=NULL;
}
};
void insert_tail(Node* &head,int val){
   Node* newnode= new Node(val);
   Node* tmp = head;
   while(tmp->next!=NULL){
    tmp = tmp->next;
   }
   tmp->next = newnode;
}
void print_link_list(Node* head){
Node* tmp = head;
    while(head!= NULL){
        cout<<head->val<<" ";
        head=head->next;
     }      
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next =a;
    a->next=b;
    insert_tail(head,40);
    insert_tail(head,50);
    insert_tail(head,60);
    insert_tail(head,70);
    insert_tail(head,80);
    insert_tail(head,90);
    print_link_list(head);
}