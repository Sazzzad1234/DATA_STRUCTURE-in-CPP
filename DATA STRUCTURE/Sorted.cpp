#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N,X;
        set<int> S;
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>X;
            S.insert(X);
        }
        for(auto it = S.begin();it != S.end();it++){
            cout<< *it<<" ";
        }
        cout<<endl;
    }
        
    return 0;
}