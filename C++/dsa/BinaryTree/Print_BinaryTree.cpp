/*
* @file 
* @description about binary tree :
* Binary tree usually consist of the two children
* node left and right (at most 2 children node).
* for ex : 
		//    1 
		     /  \ 
		     2	 3
		    /	/ \ 
		    4	5  6
* IN this code we r going to build the binary tree from scartch . 

* This code is used to Print the whole binary tree by using 
* the left and right pointer 
*/

#include <iostream> // for I/O function

class node{
public:
	int data;    		// contains value/key  of the node 
	node * left;  		// contains the left node of the tree
	node * right; 		// contains the left node of the tree
	node(int data){
		this->data =data;
		left=nullptr;
		right =nullptr;
	}

};

/*
* @print_binaryTree : 
* This function is used to print the data of the tree recurssivly.
* @param root store's the first node address
* @return if the root ==null , "void"
*/
void Print_biaryTree(node *root){
	if(root == nullptr) return;
	std::cout<<root->data<<" ";
	Print_biaryTree(root->left);
	Print_biaryTree(root->right);
}

/*
*@brief main():
* we created lef and right node children dynamically 
* and connect them with each other via root node
* user can print the binary tree 
*/
int main(){
	node *root =  new node(1);
	node *node2 = new node(2);
	node *node3 = new node(3);
	node *node4 = new node(4);
	node *node5 = new node(5);
	node *node6 = new node(6);
	root->left  =  node2;
	root->right =  node3;
	root->left->left = node4;
	root->right->right = node6;
	root->right->left = node5;
	Print_biaryTree(root);
}

