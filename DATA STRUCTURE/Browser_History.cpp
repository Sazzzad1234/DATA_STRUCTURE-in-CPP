#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    string val;
    Node* next;
    Node* prev;
    Node(string val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int main() {
    string address;
    cin >> address;
    Node* head = new Node(address);
    Node* tail = head;
    while (cin >> address && address != "end") {
        Node* newNode = new Node(address);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    Node* cur = head;
    int Q;
    cin >> Q;
    cin.ignore();
    while (Q--) {
        string com;
        getline(cin, com);
        if (com[0] == 'v' && com[1] == 'i' && com[2] == 's' && com[3] == 'i' && com[4] == 't' && com[5] == ' ') {
            string tar = "";
            for (int i=6;i<com.length();i++) {
                tar += com[i];
            }
            Node* temp = head;
            bool found = false;
            while (temp != NULL) {
                if (temp->val == tar) {
                    cur = temp;
                    found = true;
                    break;
                }
                temp = temp->next;
            }

            if (found) {
                cout<<cur->val<<endl;
            } else {
                cout <<"Not Available"<<endl;
            }
        } else if(com=="next") {
            if (cur->next!=NULL) {
                cur=cur->next;
                cout<<cur->val<<endl;
            } else {
                cout <<"Not Available"<<endl;
            }
        } else if (com =="prev") {
            if (cur->prev!=NULL) {
                cur =cur->prev;
                cout <<cur->val<<endl;
            } else {
                cout <<"Not Available" << endl;
            }
        }
    }
    return 0;
}
