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
bool ispalindrome(Node* head){
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    while(head != tmp && head->pre != tmp){
        if(head->val != tmp->val){
            return false;
        }
        head= head->next;
        tmp=tmp->pre;
    }
    return true;
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
  if(ispalindrome(head)){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
    return 0;
}