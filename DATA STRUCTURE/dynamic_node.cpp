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

int main() {
    fastIO;
    Node* head = new Node(10);
     Node* a = new Node(20);
      Node* b = new Node(30);

      head->next =a;
      a->next = b;
      
     while(head!= NULL){
        cout<<head->val<<" ";
        head=head->next;
     }      

    return 0;
}