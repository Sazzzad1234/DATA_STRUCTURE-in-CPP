#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin>>T;
  queue<string> L;
  for(int i=0;i<T;i++){
    int x;
    cin>>x;
    if(x == 0){
          string y;
          cin>>y;
        L.push(y);
    }
    else if(x == 1){
        if(!L.empty()){
            cout<<L.front()<<endl;
            L.pop();
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
  }
    return 0;
}