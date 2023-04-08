#include <bits/stdc++.h>
using namespace std;


class node{
	public:
		int data;
		node *right;
		node *left;
		node(int data){
			this->data = data;
			right = NULL;
			left = NULL;
		}
};



int rightLeft(node *root){
	if(root==NULL){
		return 0;
	}

	int rh = rightLeft(root->left);
	int lh = rightLeft(root->right);

	return max(lh,rh)+1;
	
}


bool traversal(node *root){
	if(!root){
		return 1;
	}

	int lh = rightLeft(root->left);
	int rh = rightLeft(root->right);

	cout<<"lh:"<<lh<<"rh:"<<rh<<endl;
	if((lh-rh)>1) {return 0;}
	bool l = traversal(root->left);	
	bool r = traversal(root->right);
	if(!l){return false;}
	if(!r){return false;}
	return true;

}


int main(){

	node *n1 = new node(1);
        node *n2 = new node(2);
        node *n3 = new node(3);
        node *n4 = new node(4);
        node *n5 = new node(5);
        node *n6 = new node(6);
        node *n7 = new node(7);
        n1->left = n2;n1->right = n3;
        n2->left = n4;n2->right = n5;

	n5->right = n6;

	
	cout<<traversal(n1);

}
