#include <bits/stdc++.h>
using namespace std;
class student{
        public:
        string Name;
        int Roll;
        int Marks;
        student(string Name,int roll,int marks){
            this->Name=Name;
            this->Roll =Roll;
            this->Marks=Marks;
        }
    };  
    class cmp  {
       public:
       bool operator()(student l,student r){
           if(l.Marks > r.Marks){
            return true;
           }
           else if(l.Marks < r.Marks){
            return false;
           }
           else{
            return l.Roll < r.Roll;
           }
       }
    };
int main() {
    priority_queue<student,vector<student>,cmp>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string Name;
        int Roll,Marks;
        cin>>Name>>Roll>>Marks;
        student obj(Name,Roll,Marks);
        pq.push(obj);
    }
while(!pq.empty()){
    cout<< pq.top().Name <<" "<<pq.top().Roll<<" "<<pq.top().Marks<<endl;
}
    return 0;
}