#include <bits/stdc++.h>
using namespace std;
void print_forward(list<int>& lst) {
    cout << "L -> ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;
}
void print_reverse(list<int>& lst) {
    cout << "R -> ";
    list<int> temp = lst;
    temp.reverse();        
    for (int val : temp) {
        cout << val << " ";
    }
    cout << endl;
}
int main() {
    list<int> PQ;
    int Q;
    cin >> Q;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            PQ.push_front(V);
        } 
        else if (X == 1) {
            PQ.push_back(V);
        } 
        else if (X == 2) {
            if (V >= 0 && V < PQ.size()) {
                auto it = PQ.begin();
                for (int i = 0; i < V; ++i) {
                    ++it;
                }
                PQ.erase(it);
            }
        }
        print_forward(PQ);
        print_reverse(PQ);
    }
    return 0;
}
