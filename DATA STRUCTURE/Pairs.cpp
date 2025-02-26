#include <bits/stdc++.h>
using namespace std;
class comparator {
public:
    bool operator()(pair<string, int> a, pair<string, int> b) {
        if (a.first > b.first) {
            return false; 
        } 
        else if (a.first == b.first) {
            return a.second > b.second;
        }
        return true;
    }
};
int main() {
    priority_queue<pair<string, int>, vector<pair<string, int>>, comparator> pq;

    int N;
    cin >>N; 
    for (int i = 0; i < N; i++) {
        string str;
        int num;
        cin >> str >> num;
        pq.push({str, num});
    }
    vector<pair<string, int>> X;
    while (!pq.empty()) {
        X.push_back(pq.top());
        pq.pop();
    }

    reverse(X.begin(), X.end());

    for(auto it=X.begin();it!=X.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
