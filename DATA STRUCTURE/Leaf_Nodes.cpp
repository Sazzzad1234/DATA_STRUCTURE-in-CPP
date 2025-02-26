#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;
    cin>> val;
    Node* root ;
    if(val == -1){
        root = NULL;
    }
    else {
        root= new Node(val);
    }
    queue<Node*> q;
    if(root != NULL)
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft,*myright;
        if(l == -1){
            myleft = NULL;
        }
        else{
            myleft = new Node(l);
        }

        if(r == -1){
            myright = NULL;
        }
        else{
            myright = new Node(r);
        }

        f->left=myleft;
        f->right=myright;

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return root;
}

void leaf_nodes(Node* root , vector<int>&S){

    if (root == NULL) {
        return ;
    }
    if(root->left == NULL && root->right == NULL){
         S.push_back(root->val);
         return;
    }
    leaf_nodes(root->left,S);
    leaf_nodes(root->right,S);
    
}
int main(){
Node* root = input_tree();
vector<int>S;
    leaf_nodes(root,S);
    sort(S.begin(),S.end(),greater<int>());
    for(int i=0;i < S.size();i++){
        cout<< S[i]<<" ";
    }
    cout<<endl;
    return 0;
}