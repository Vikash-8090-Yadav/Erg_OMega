#include <bits/stdc++.h>
using namespace std;


class node{
	public:
		int data;
		node *right;
		node *left;
		node(int data){
			this->data=data;
			right = NULL;
			left = NULL;
		}
};



node *sumleaves(node *root){
	

	
	sumleaves(root->left);
	sumleaves(root->right);



}

int main(){
}
