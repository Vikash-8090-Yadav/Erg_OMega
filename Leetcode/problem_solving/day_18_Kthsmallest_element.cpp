#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;
	node(int data){
		this->left = NULL;
		this->right = NULL;
		this->data = data;
	}
};


void leve_order(node *root,vector<int> &data){
	queue<node*> q;
	q.push(root);
	node *curr = NULL;
	while(!q.empty()){
		curr = q.front();
		q.pop();
		data.push_back(curr->data);
		if(curr->left!=NULL){
			q.push(curr->left);
		}
		if(curr->right!=NULL){
			q.push(curr->right);
		}
	}
}

void pn(node *root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	pn(root->left);
	pn(root->right);
}

int main(){
	int k ;cin>>k;
	vector<int> v1;
	node * root = new node(3);
	node * n1 = new node(1);
	node * n4 = new node(4);
	node * n2 = new node(2);
	root->left = n1;
	root->right = n4;
	root->left->right = n2;
	// pn(root);
	leve_order(root,v1);
	sort(v1.begin(),v1.end());
	// for(auto x: v1){
	// 	cout<<x<<" ";
	// }
	cout<<v1[k-1];
}