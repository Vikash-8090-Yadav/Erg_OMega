#include <bits/stdc++.h>
using namespace std;



class node{
	public:
		int data;
		node *right ;
		node *left;
		node(int data){
			this->data = data;
			right = NULL;
			left = NULL;
		}
};

void  chk1(node *root , vector<int> &ans){
	if(!root) {return;}

	
	chk1(root->left,ans);
	ans.push_back(root->data);
	chk1(root->right,ans);
}

bool chk(node *root){
	if(!root){
		return 1;
	}

	/**
	node *parent = root;

	if(root->left!=NULL && root->left->data!=root->data &&  root->left->data >root->data){
		return false;
	}
	if(root->right!=NULL &&root->right->data!=root->data &&  root->right->data <root->data){
		return false;
	}

	*/

	vector<int> ans;
	chk1(root,ans);


	vector<int> v2;



	for(auto x : ans){
		cout<<x<<" ";
		v2.push_back(x);
	}

	sort(v2.begin(),v2.end());
	if(ans[0] ==v2[v2.size()-1] && ans.size()!=1) return false;
	if(ans==v2) return true;
	return false;


}



int main(){
	node *n1 = new node(1);
        node *n2 = new node(2);
        node *n3 = new node(3);
        node *n4 = new node(4);
        node *n5 = new node(5);
        node *n6 = new node(6);
        node *n7 = new node(7);
        n2->left =n1;
	n2->right = n3;
        /**n3->left = n2;n3->right = n4;

       	n5->right = n6;
*/
	bool ans = chk(n2);

	cout<<ans;

}

