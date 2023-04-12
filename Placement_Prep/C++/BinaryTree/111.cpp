#include <bits/stdc++.h>
using namespace std;


class node{
	public:
		int data;
		node*right ;
		node *left;
		node(int data){
			this->data = data;
			right = NULL;
			left = NULL;
		}
};

int mnnode(node *root,int count){

	if(!root){
		return 0;
	}
	if(root->left==NULL and root->right !=NULL){

		return 1+ max(0,mnnode(root->right));
	}
	if(root->left!=NULL and root->right ==NULL){

		return 1+ max(0,mnnode(root->left));
	}

	return 1+ min(mnnode(root->left),mnnode(root->right));
//	if(!root){
//		return 0;
//	}
	//if(root->left==NULL and root->right ==NULL){
	//	count = count+1;
	//	return count;
	//}

//	return 1+ min(mnnode(root->left,count++),mnnode(root->right,count++));
}

int main(){
	node *n1 = new node(1);
        node *n2 = new node(2);
        node *n3 = new node(3);
        node *n4 = new node(4);
        node *n5 = new node(5);
        node *n6 = new node(6);
        node *n7 = new node(7);
        n1->left = n2;n1->right = n6;
        n2->left = n4;n2->right = n5;
	n5->right = n6;

	int ans = mnnode(n1,0);
	cout<<ans;
}
