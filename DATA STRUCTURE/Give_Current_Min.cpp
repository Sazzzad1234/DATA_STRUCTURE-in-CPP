#include<bits/stdc++.h>
using namespace std;
int main(){
 priority_queue<int,vector<int>,greater<int>>pq;
 int N;
 cin>>N;
 for(int i=0;i<N;i++){
    int x;
    cin>>x;
    pq.push(x);
 }
 int Q;
 cin>>Q;
 for(int i=0;i<Q;i++){
    int command;
    cin>>command;
    if(command == 0){
        int X;
        cin>> X;
        pq.push(X);
cout<<pq.top()<<endl;
    }
    else if(command == 1){
        if(!pq.empty()){
            cout<<pq.top()<<endl;
        
        }
        else{
            cout<<"Empty"<<endl;
        }
    }
    else if(command == 2){
        if(!pq.empty()){
            pq.pop();
        }
        if(!pq.empty()){
            cout<<pq.top()<<endl;
        
        }
        else{
            cout<<"Empty"<<endl;
        }
    }
    else{
        cout<<"Empty"<<endl;
    }
 }
}
