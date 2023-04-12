#include <bits/stdc++.h>
using namespace std;


class node{
	public:
		int data;
		node *right;
		node *left;
		node(int data){
			this->data=data;
			right = NULL;
			left = NULL;
		}
};



int sumleaves(node *root,int sum){
	if(!root) return 0;

	if(root->right ==NULL && root->left ==NULL){
		sum = sum*10+root->data;
		return sum;
	}
	sum  = sum*10+root->data;
	return sumleaves(root->left , sum) + sumleaves(root->right,sum);

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

	 cout<<sumleaves(n1,0);
	 
	
}
