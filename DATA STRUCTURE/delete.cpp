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
void print(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void input(Node*&head,Node*&tail,int val){
    Node* newnode= new Node(val);
    if(head == NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void delete_node(Node* &head){
Node* deletenode= head;
head=head->next;
delete deletenode;
}
int main() {
    fastIO;
    Node* head = NULL;
    Node* tail = NULL;
         int val;
         while(true){
            cin>>val;
            if(val==-1){
                break;
            }
            input(head,tail,val);
         }
         print(head);
         cout<<endl;
         delete_node(head);
         cout<<endl;
         print(head);
         cout<<endl;
         delete_node(head);
         cout<<endl;
         print(head);

    return 0;
}