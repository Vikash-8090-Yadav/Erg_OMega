#include <bits/stdc++.h>
using namespace std;


class TreeNode{
public:
	int val;
	TreeNode * left;
	TreeNode * right;
	TreeNode(int val){
		this->val=val;
		left = NULL;
		right = NULL;
	}

};
vector<int> v1;

int rangeSumBST(TreeNode* root, int low, int high) {

    // vector<int> v1;
    if(root ==  NULL){
       return 0;
   }
   if((root->val)>=low && (root->val)<=high){
   	// cout<<root->val<<" ";
   	v1.push_back(root->val);

   	rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
   }
   else{
   	rangeSumBST(root->left,low,high);
   	rangeSumBST(root->right,low,high);
   	// if(root=root->left)
   }
   int sum1=0;
   for(auto x: v1){
   	sum1+=x;
   }
   return sum1;
   // return -1;
    // else{
    //     rangeSumBST(root->left,low,high);
    //     rangeSumBST(root->right,low,high);    
    // }
   	// int x = 0;
    // for(auto x1 : v1){
    // 	cout<<x1<<" ";
    // 	x+=x1;
    // }
    // return x;
            
}

			// 		10
			// 	  /    \ 
			// 	 5      15
			//  /  \    /   \
			//  3  7   13    18 
			// /   /
			// 1   6    

int main(){
	int low = 6;
	int high = 10;
	TreeNode * root = new TreeNode(10);
	TreeNode * node5 = new TreeNode(5);
	TreeNode * node15 = new TreeNode(15);
	TreeNode * node3 = new TreeNode(3);
	TreeNode * node7 = new TreeNode(7);
	TreeNode * node1 = new TreeNode(1);
	TreeNode * node6 = new TreeNode(6);
	TreeNode * node13 = new TreeNode(13);
	TreeNode * node18 = new TreeNode(18);


	root->left = node5;
	root->right = node15;
	root->left->left=node3;
	root->left->left->left = node1;
	root->left->right= node7;
	root->left->right->left = node6;
	root->right->left = node13;
	root->right->left = node18;
	cout<<rangeSumBST(root,low,high);
}