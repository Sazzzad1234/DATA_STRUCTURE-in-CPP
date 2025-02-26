#include <bits/stdc++.h>
using namespace std;
int main() {
         list<int> l = {10,20,30,40,50,60,70,80,5,7};
         l.sort();
         for(int val: l){
            cout<<val<<endl;
         }
         cout<<endl;
         l.sort(greater<int>());
         for(int val: l){
            cout<<val<<endl;
         }
         l.unique();

    return 0;
}