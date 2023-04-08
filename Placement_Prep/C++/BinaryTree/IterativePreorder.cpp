#include <bits/stdc++.h>
using namespace std;

class TreeNode{
	public:
		int data;
		TreeNode *right;
		TreeNode *left;
		TreeNode(int data){
			this->data = data;
			right =NULL;
			left =NULL;
		}
};

vector<int> IterativePreorder(TreeNode *root){
	stack<TreeNode *> s;
	s.push(root);
	TreeNode *curr = NULL;
	vector<int> ans;
	while(s.size()!=0){
		curr = s.top();
		s.pop();
		ans.push_back(curr->data);
		if(curr->right!=NULL){
			s.push(curr->right);
		}
		if(curr->left!=NULL){
			s.push(curr->left);
		}

	}
	return ans;
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
        //n1->left->left = n4;
        //n1->left->right = n5;
        n1->right->left = n6;
        n1->right->left->right = n7;

	vector<int> v1 = IterativePreorder(n1);
	for(auto x : v1){
		cout<<x<<" ";
	}
}
