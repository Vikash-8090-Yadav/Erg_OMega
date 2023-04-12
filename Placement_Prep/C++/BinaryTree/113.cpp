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

vector<vector<int>> ans;
vector<vector<int>> ans2(node *root,int targetsum,vector<int> v1){
	if(!root){
		return ans;
	}
	if(root->left ==NULL and root->right ==NULL){
		targetsum = targetsum-root->data;
			
		if(targetsum==0){
			v1.push_back(root->data);
			ans.push_back(v1);
			return ans;
		}
	}
	v1.push_back(root->data);

	ans2(root->left,targetsum-root->data,v1); ans2(root->right,targetsum-root->data,v1);
	return ans;
	
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
	vector<int> v1;
	vector<vector<int>> ans1 = ans2(n1,7,v1);

	for(int i =0;i<ans1.size();++i){
		for(int j=0;j<ans[i].size();++j){
			cout<<ans1[i][j]<<" ";
		}
	}

}
