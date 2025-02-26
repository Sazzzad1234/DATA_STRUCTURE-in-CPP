#include <bits/stdc++.h>
using namespace std;
int main(){
stack<int> S;
queue<int> Q;

int N,M;
cin>>N>>M;
if(N != M){
    cout<<"NO"<<endl;
    return 0 ;
}
for(int i=0;i<N;i++){
    int A;
    cin>>A;
    S.push(A);
}
for(int i=0;i<M;i++){
    int B;
    cin>>B;
    Q.push(B);
}
int count=0;
while(!S.empty() && !Q.empty()){
    if(S.top() == Q.front()){
        count++;
        S.pop();
        Q.pop();
    }
    else{
        cout<<"NO"<<endl;
        break;
    }
}
if(count == N){
    cout<<"YES"<<endl;
}    

    return 0;
}