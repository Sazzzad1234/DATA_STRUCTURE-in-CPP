#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int marks;
    student(string name,int roll,int marks){
        this->name = name;
        this->marks = marks;
        this->roll = roll;
    }
};
class cmp {
    public:
    bool operator()(student l,student r){
        if(l.marks < r.marks){
return true;
        }
     else if(l.marks > r.marks){
        return false;
     }
     else{
        return l.roll > r.roll;
     }
        
    }
};
int main() {
    priority_queue<student,vector<student>,cmp> pq;
         int n;
         cin>>n;
         for(int i=0;i<n;i++){
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            student obj(name,roll,marks);
            pq.push(obj);
         }
         int Q;
         cin>>Q;
         for(int i=0;i<Q;i++){
            int command;
            cin>>command;
            if(command == 0){
                string name;
                int roll,marks;
            cin>>name>>roll>>marks;
            student obj(name,roll,marks);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else if(command == 1){
                if(!pq.empty()){
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
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
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
                else{
                    cout<<"Empty"<<endl;
                }
            }
            
         }  
         }