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
void reverse_dubbly(Node* head,Node* tail){
    for(Node *i=head,*j=tail;i!=j && i->pre !=j;i=i->next,j=j->pre){
        swap(i->val,j->val);
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
     print_forward(head);
     cout<<endl;
     reverse_dubbly(head,tail);
     print_forward(head);
    return 0;
}