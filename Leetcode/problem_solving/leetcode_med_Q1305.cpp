#include <bits/stdc++.h>
using namespace std;
class node{
public:
    node*right;
    node*left;
    int data;
    node(int data){
        this->data =data;
        this->left = NULL;
        this->right = NULL;
    }
};

void in(node *root,vector<int> &v1){
    if(root==NULL){
        return;
    }
    in(root->left,v1);
    v1.push_back(root->data);
    in(root->right,v1);
}
vector<int> getAllElements(node* root1, node* root2){
    vector<int> v1,v2;
    vector<int> ans;
    in(root1,v1);
    in(root2,v2);

    for(auto x: v1){
        ans.push_back(x);
    }
    for(auto x : v2){
        ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    return ans; 
}


int main(){
}

