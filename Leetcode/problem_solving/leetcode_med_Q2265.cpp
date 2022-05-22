#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *left;
	node *right;
	node(int data){
		this->data = data;
		this->left=NULL;
		this->right = NULL;
	}
};


int sum_node(node *root,int &cnt){
	if(root == NULL){
		return 0;
	}
	cnt++;
	return root->data +(sum_node(root->left,cnt) +sum_node(root->right,cnt));
}


void level_order(node *root,vector<node *> &v1){
	queue<node *> q;
	q.push(root);
	while(q.size()){
		node *fr = q.front();
		q.pop();
		v1.push_back(fr);
		if(fr->left){
			q.push(fr->left);
		}
		if(fr->right){
			q.push(fr->right);
		}
	}
}

int main(){
	/*

		       											//         4
														//       /	 \
														//      8      5
														//    /   \      \
														 //   0   1      6

*/

	// node *root = new node(1);
	// node *n2 =   new node(2);
	// node *n3 =   new node(3);
	// node *n4 =   new node(4);
	// node *n5 =   new node(5);
	// node *n6 =   new node(6);
	// node *n7 =   new node(7);
	// node *n8 =   new node(8);
	node *root = new node(4);
	node *n8 = new node(8);
	node *n0 = new node(0);
	node *n1 = new node(1);
	node *n5 = new node(5);
	node *n6 = new node(6);
	root->left = n8;
	root->right = n5;
	root->left->left =n0;
	root->left->right = n1;
	root->right->right = n6;
	// root->left = n2;
	// root->right=n3;
	// root->left->left = n4;
	// root->left->right = n5;
	// root->right->left = n6;
	// root->right->right =  n7;
	// root->right->right->left= n8;
	vector<node *> v1;
	int cnt=0;
	int count_result=0;
	level_order(root,v1);
	for(auto ndoe : v1){
		int total_sum = sum_node(ndoe,cnt);
		int avg = ((total_sum)/cnt);
		cout<<"avg:"<<avg<<"node->data:"<<ndoe->data<<" "<<endl;
		if(ndoe->data == avg){
			count_result++;
		}
		cnt=0;

	}

	cout<<count_result;
	// sum_node(root);

}