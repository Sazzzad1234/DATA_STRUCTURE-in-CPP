#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        string s;
        cin>>s;
        stack<char>st;
        for(char c :s){
            if (c == '0'){
                if(!st.empty() && st.top() == '1'){
                    st.pop();
                } 
                else {
                    st.push(c);
                }
            }
             else if (c == '1') {
                if (!st.empty() && st.top() == '0') {
                    st.pop();
                } 
                else{
                    st.push(c);
                }
            }
        }
        if (st.empty()){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
