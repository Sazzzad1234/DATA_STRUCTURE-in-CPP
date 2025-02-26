#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++){
        string S;
        cin >> S;
        stack<char> E;
        bool X = false;
        for (char c : S) {
            if (c == '0') {
                E.push(c);
            } else if (c == '1') {
                if (E.empty()) {
                    X = true; 
                    break; 
                } else {
                    E.pop();
                }
            }
        }
        if(X){
            cout <<"NO"<< endl;
        }
        else if(E.empty()) {
            cout <<"YES"<< endl;
        }
        else {
            cout <<"NO"<< endl;
        }
    }
    return 0;
}
