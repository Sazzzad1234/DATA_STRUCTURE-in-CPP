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
void input(Node* &head,Node* &tail,int val){
Node* newnode = new Node(val);
if(head == NULL){
    head = newnode;
    tail = newnode;
    return;
}
tail->next = newnode;
tail = newnode;
}
void print(Node*head){
    while(head!= NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void duplicate(Node* head){
    int frequency[101] = {0};
    for(Node* temp = head;temp !=NULL;temp=temp->next){
        frequency[temp->val]++;
    }
    bool d = false;
    for(int i=0;i<100;i++){
        if(frequency[i] > 1){
            d = true;
        }
    }
    if(d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
    fastIO;
    int count=0;
    Node* head = NULL;
    Node* tail =NULL;
    int val;
         while(true){
            cin>>val;
            count++;
            if(val==-1){
break;
            }
            input(head,tail,val);
         }
         print(head);
         cout<<endl;

         duplicate(head);

    return 0;
}