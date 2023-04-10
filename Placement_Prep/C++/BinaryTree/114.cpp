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

node *ans(node * root,node *main , node *temp){
	if(!root){
		
		return NULL;
	}
	
	//node *newnode = new node(root->data);
	//cout<<newnode->data<<" ";
	//if(!main){
	//	main = newnode;
	//	temp = main;
	//}
	//else{
	///	temp->right = newnode;
	//	temp = temp->right;
	//	cout<<temp->data<<" ";
	//}

	main->left=(ans(root->left,main,temp));
	main->left=(ans(root->right,main,temp));

	return main;
}


void show (node *root){
	if(!root){
		return;
	}

	cout<<root->data<<" "<<endl;

	show(root->left);
	show(root->right);
}

void flaten(node *root){
	node *main = NULL;
   	node *temp  = NULL;
	node *m = ans(root,main , temp);

	show(m);

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
        
	flaten(n1);


}
