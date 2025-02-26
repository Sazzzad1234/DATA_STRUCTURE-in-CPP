#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    long long int val;
    Node* next;
    Node(long long int val){
        this->val=val;
        this->next=NULL;
    }
};
void input(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int find(Node* head, int X) {
    int index = 0;
    Node* tmp = head;
    while (tmp) {
        if (tmp->val == X) {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        Node* head = NULL;
        Node* tail = NULL;

        long long int val;
        while (true) {
            cin >> val;
            if (val == -1) {
                break;
            }
            input(head, tail, val);
        }
        int X;
        cin >> X;
        int Y= find(head,X);
        cout<<Y<<endl;

    }
    return 0;
}
