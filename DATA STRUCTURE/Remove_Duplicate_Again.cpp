#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    int num;
    while(cin>>num){
        if(num == -1){
            break;
        }
        l.push_back(num);
    }
    l.sort();
    l.unique();
    for(int n: l){
        cout<<n<<" ";
    }
    cout<<endl;
}