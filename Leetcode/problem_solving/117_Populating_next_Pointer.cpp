#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*right;
    node*left;
    node *next;
    node(int data){
        this->right = NULL;
        this->left =NULL;
        this->data = data;
        this->next =NULL;
    }
};

node *lvel_sum(node *root){
    if(root==NULL){
        return 0;
    }
    queue<node*>q;
    q.push(root);
    int sum =0;
    while(q.size()){
        sum=0;
        int s = q.size();
        for(int i =0;i<s;++i){
            node *dum = new node(0);
            node *f = q.front();
            q.pop();
            dum->next =f;
            dum = dum->next;
            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return root;

}

node* connect(node* root){
    return lvel_sum(root);
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
    connect(root);
}   