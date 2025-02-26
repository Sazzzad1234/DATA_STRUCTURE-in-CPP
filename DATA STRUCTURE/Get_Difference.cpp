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
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int Difference(Node* head) {
    if (!head){
return 0;
    }

    long long int max = head->val;
    long long int min = head->val;

    Node* tmp = head;
    while (tmp) {
        if (tmp->val > max) max = tmp->val;
        if (tmp->val < min) min = tmp->val;
        tmp = tmp->next;
    }

    return max - min;
}

int main() {
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
    cout << Difference(head) << endl;

    return 0;
}
