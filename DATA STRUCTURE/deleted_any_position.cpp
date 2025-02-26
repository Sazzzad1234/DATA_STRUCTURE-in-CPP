#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007
class Node{
    public:
int val;
Node* next;
Node(int val){
    this->val=val;
    this->next=NULL;
}
};
void insert(Node* &head,Node*&tail,int val){
    Node* newnode = new Node(val);
    while(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print(Node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void delete_node_at_any_position(Node* &head,int idx){
Node* tmp= head;
for(int i=1;i<idx;i++){
    tmp=tmp->next;
}
Node* deletenode=tmp->next;
tmp->next=tmp->next->next;
delete deletenode;
}
int main() {
    fastIO;
         Node* head=NULL;
         Node* tail=NULL;
         int val;
         while(true){
            cin>>val;
            if(val==-1){
                break;
            }
            insert(head,tail,val);
         }
         int idx;
         cin>>idx;
         delete_node_at_any_position(head,idx);
         print(head);

    return 0;
}