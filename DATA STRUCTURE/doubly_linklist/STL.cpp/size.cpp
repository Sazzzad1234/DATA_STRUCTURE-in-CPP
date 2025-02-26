#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
         list<int> l={10,20,30,40,50,60,70,80};
        // list<int> l2={200 500};
         l.push_back(40);
         l.push_front(100);
        for(auto it = l.begin();it != l.end();it++){
            cout<< *it << endl;
        }
        cout<<endl;
        // jekono index a thaka value check korte caile
        cout<<*next(l.begin(),3);

        //insert position
        l.insert(next(l.begin(),2), 100);

        //list ar position a list add korar khettra
       // l.insert(next(l.begin(),2), l2.begin(),l2.end());

       //l.erase(next(l.begin(),2),next(l.begin(),5));
      // replace(l.begin(),l.end(),20,100);
      auto it = find(l.begin(),l.end(),200);
      if(it == l.end()){
        cout<<" Not found"<<endl;
      }
      else{
        cout<<"Found"<<endl;
      }

        for(int val : l){
            cout<< val << endl;
        }

    return 0;
}