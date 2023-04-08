#include <bits/stdc++.h>
using namespace std;

/*
 * Problen name : Sum of all nodes of the  binary tree
 * */

class TreeNode{
	public:
		int data;
		TreeNode*right;
		TreeNode *left;
		TreeNode(int data){
			this->data=data;
			right = NULL;
			left = NULL;
		}

};



bool flag = false;
int IdenticalBinary(TreeNode* root,TreeNode* root1){

	if(root==NULL || root1==NULL){
		return (root==root1);
	}

	return (root->data == root1->data) && IdenticalBinary(root->left , root1->left)&& IdenticalBinary(root->right,root1->right);

}

int main(){
	TreeNode *n1 = new TreeNode(1);
        TreeNode *n2 = new TreeNode(2);
        TreeNode *n3 = new TreeNode(3);
        TreeNode *n4 = new TreeNode(4);
        TreeNode *n5 = new TreeNode(5);
        TreeNode *n6 = new TreeNode(6);
        TreeNode *n7 = new TreeNode(7);
        n1->left = n2;n1->right = n3;
        n2->left = n4;n2->right = n5;

	TreeNode *nn1 = new TreeNode(1);
        TreeNode *nn2 = new TreeNode(2);
        TreeNode *nn3 = new TreeNode(3);
        TreeNode *nn4 = new TreeNode(4);
        TreeNode *nn5 = new TreeNode(5);
        TreeNode *nn6 = new TreeNode(6);
        TreeNode *nn7 = new TreeNode(7);

	nn1->left = nn2;nn1->right = nn3;
        nn2->left = nn4;nn2->right = nn5;

	cout<<IdenticalBinary(n1,nn1);
}
