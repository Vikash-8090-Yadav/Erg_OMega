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

map<TreeNode*,int> m;
int sum =0;
int Sum(TreeNode* root){
	if(root ==NULL) return 0;

	if(m[root]==0){
		sum+=root->data;
	}
	if(root->left!=NULL){
		m[root]=1;
		Sum(root->left);
	}
	if(root->right!=NULL){
		m[root]=1;
		Sum(root->right);
	}
	return sum;
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

	int ans = Sum(n1);
	cout<<ans;


}
