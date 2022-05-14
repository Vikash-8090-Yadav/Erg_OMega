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

void r(node *root,vector<node*> &v1){
	node *curr = NULL;
	queue<node *> q;
	// vector<int> v1;
	q.push(root);
	while(q.size()){
		curr = q.front();
		q.pop();
		v1.push_back(curr);
		if(curr->left!=NULL){
			q.push(curr->left);
		}
		if(curr->right!=NULL){
			q.push(curr->right);
		}
	}
}

void pn(node * root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	pn(root->left);
	pn(root->right);
}


void srch(node * root,node *ele,node *(&fnd)){
	if(root==NULL){
		return;
	}
	if(root->left == ele || root->right == ele){
		fnd =root;
		return;
	}
	srch(root->left,ele,fnd);
	srch(root->right,ele,fnd);
}


int lvel_sum(node *root){
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
			node *f = q.front();
			q.pop();
			sum+=f->data;
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}
	}
	return sum;

}

int deepestLeavesSum(node*root){
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
	cout<<deepestLeavesSum(root);
}