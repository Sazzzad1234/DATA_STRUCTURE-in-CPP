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
        this->val = val;
        this->next = NULL;
    }
};
void insert_linklist( Node* head,int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head=newnode;
}
void print_linked_list(Node* head){
    Node* tmp = head;
    while(head!= NULL){
        cout<<head->val<<" ";
        head=head->next;
     }      
}

int main() {
    fastIO;
         

    return 0;
}