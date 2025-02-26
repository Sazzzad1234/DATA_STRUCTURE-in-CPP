#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define mod 1000000007

int main() {
    fastIO;
         int t;
         cin>>t;
         for(int i=0;i<t;i++){
            int l,r;
            cin>>l>>r;
            if(l<r){
                for(int i=l;i<r;i++){
                    if(l%i == 0 && r%i ==0 ){
                       int x = i;
                    }
                }
            }
         }

    return 0;
}