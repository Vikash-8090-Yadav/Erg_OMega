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

int level_order(node *root){
    int cnt=0;
    queue<node *> q;
    q.push(root);
    while(q.size()){
        int s = q.size();
        for(int i = 0;i<s;++i){
            node *fir=q.front();
            // cnt++;
            q.pop();
            if(fir->left){
                q.push(fir->left);
            }
            if(fir->right){
                q.push(fir->right);
            }
        }
        cnt++;
    }
    return cnt;
}

int maxDepth(node* root){
    if(root==NULL){
        return 0;
    }
    return level_order(root);
}

int main(){
    node *root = new node(1);
    node * n2 = new node(2);
    node * n3 = new node(3);
    node * n4 = new node(4);
    node * n5 = new node(5);
    node * n6 = new node(6);
    node * n7 = new node(7);
    node * n8 = new node(8);
    root->right = n3;
    root->left = n2;
    root->left->right = n5;
    root->left->left = n4;
    root->left->left->left = n7;
    root->right->right = n6;
    root->right->right->right = n8;
    // cout<<deepestLeavesSum(root);
    cout<<maxDepth(root);
}