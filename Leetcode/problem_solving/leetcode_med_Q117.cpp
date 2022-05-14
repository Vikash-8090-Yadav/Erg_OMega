#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*right;
	node*left;
	node(int data){
		this->right = NULL;
		this->left =NULL;
		this->data = data;
	}
};


node* connect(node* root){
	queue<node *> q;
	q.push(root);
	while(q.size()){
		for(int i =0;i<s;++i){
			node *f = q.front();
			q.pop();
			if(f->right){
				node*n# 
				q.push()
				q.push(f->right);
			}
			if(f->left){
				q.push(f->right);
			}
		}
		// q.push(n5)
	}
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