#include <bits/stdc++.h>
using namespace std;

class node {
	public:
		int data;
		node *next;
		node(int data){
			this->data= data;
			next =NULL;
		}
};

void print(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}


node *ans(node *head){

	vector<int> nums;
	node *slow = head;node *fast = head->next;
	while(fast!=NULL){
		nums.push_back(__gcd(slow->data,fast->data));
		slow = fast;
		fast = fast->next;
	}

	node *slow1 = head;
        node *fast1 = head->next;

	for(int i =0;i<nums.size();++i){
		node *newnode = new node(nums[i]);
		
		slow1->next = newnode;
		newnode->next =fast1;
		slow1 = fast1;fast1 = fast1->next;
	}
	return head;
}

int main(){
	node *n1 = new node(2);
	node *n2 = new node(14);
	node *n3 = new node(3);
	node *n4 = new node(4);
	node *head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	node *orh = ans(head);
	print(orh);

}
