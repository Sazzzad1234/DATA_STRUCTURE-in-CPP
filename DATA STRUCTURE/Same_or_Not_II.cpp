#include <bits/stdc++.h>
using namespace std;
class mystack
{
    public:
vector<int> V;
void push(int val){
    V.push_back(val);
     }

void pop(){
    V.pop_back();
}

int top(){
   return V.back();
}
int size(){
    return V.size();
}
bool empty(){
        return V.empty();
    }

};
class Node{
public:
int val;
Node* next;
Node(int val){
    this->val = val;
    this->next = NULL;
}
};
class myQueue{
    public:
 Node* head = NULL;
 Node* tail = NULL;

 void push(int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
 }

 void pop(){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
    }
     }
     int front(){
        return head->val;
     }
     int back(){
        return tail->val;
     }
     bool empty(){
        if(head == NULL){
            return true;
        }
        else {
            return false;
        }
     }
};
int main() {
    mystack S;
    myQueue Q;
    int N,M;
    cin>>N>>M;
    if(N != M){
    cout<<"NO"<<endl;
    return 0 ;
}
    for(int i =0;i<N;i++){
        int A;
        cin>>A;
        S.push(A);
    }
    for(int i =0;i<M;i++){
        int B;
        cin>>B;
        Q.push(B);
    }
    int count=0;
while(!S.empty() && !Q.empty()){
    if(S.top() == Q.front()){
        count++;
        S.pop();
        Q.pop();
    }
    else{
        cout<<"NO"<<endl;
        break;
    }
}
if(count == N){
    cout<<"YES"<<endl;
}    

         

    return 0;
}