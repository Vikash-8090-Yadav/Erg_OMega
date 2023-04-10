#include <bits/stdc++.h>

/*
 * Not completed !
 * */
using namespace std;

class node{
	public:
		int data;
		node *left;
		node *right;

		node(int data){
			this->data = data;
			right = NULL;
			left = NULL;
		}
};


int leftright(node *root){

	if(!root) return 0;

	int lh = leftright(root->left);
	int rh = leftright(root->right);

	if(abs(lh-rh)>1) return -1;

	if(lh==-1 || rh==-1) return -1;

	return max(lh,rh)+1;

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

	if(leftright(n1)!=-1) cout<<1;
	else cout<<0;


}
