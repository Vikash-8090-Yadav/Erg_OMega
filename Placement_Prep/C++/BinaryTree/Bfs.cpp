#include <bits/stdc++.h>
using namespace std;

class TreeNode{
        public :
        int data;
        TreeNode *right;
        TreeNode *left;

        TreeNode(int data){
                this->data = data;
                left = NULL;
                right = NULL;
        }
};


vector<int> level(TreeNode *root){
	vector<int> level;
	TreeNode *curr = NULL;

	queue<TreeNode *> q;
	q.push(root);

	while(q.size()){
		curr = q.front();
		q.pop();
		if(curr->left!=NULL){
			q.push(curr->left);
		}
		if(curr->right!=NULL){
			q.push(curr->right);
		}

		level.push_back(curr->data);
	
	
	}
	return level;
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
        //n1->right->left = n6;
        //n1->right->left->right = n7; 
	//
	 vector<int> v1  = level(n1);
	 for(auto x : v1){
		 cout<<x<<" ";
	 }
	 cout<<endl;
}
