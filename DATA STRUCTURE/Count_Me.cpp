#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    cin.ignore();
    for(int i=0;i<T;i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        vector<pair<string,int>> x;
        while (ss >> word) {
            mp[word]++;
                x.push_back({word,mp[word]});   
        }
        string fre;
        int count = 0;
        for (auto it = x.begin(); it != x.end(); it++) {
            string new_word = it->first;
            int new_count = it->second;
            if(new_count > count){
                fre = new_word;
                count =new_count;
            }
        }
        cout << fre << " " << count << endl;
    }
    return 0;
}
