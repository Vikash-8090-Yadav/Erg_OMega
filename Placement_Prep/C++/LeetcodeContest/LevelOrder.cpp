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

vector<int> v1;
void levelT(node * root){

	if(!root){
		return;
	}

	queue<node *> s;

	s.push(root);
	node *curr = NULL;
	while(s.size()!=0){
		int siz  = s.size();
		for(int i = 0;i<siz;++i){

			curr = s.front();
			s.pop();

			if(curr->left){
				s.push(curr->left);
			}
			if(curr->right){
				s.push(curr->right);
			}
			v1.push_back(curr->data);
		}
		ans.push_back(v1);
	}
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

	  levelT(n1);

	  for(auto x :v1){
		  cout<<x<<" ";
	  }

}
