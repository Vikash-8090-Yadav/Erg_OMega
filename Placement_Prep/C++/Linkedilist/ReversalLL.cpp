#include <bits/stdc++.h>
using namespace std;


class node{
	public:
		int data;
		node *next;
		node(int data){
			this->data = data;
			next = NULL;
		}
};


void print(node *head){
	node *newnode = head;
	while(newnode!=NULL){
		cout<<newnode->data<<endl;
		newnode = newnode->next;

	}
}


node *reverse (node *head){
	if(head ==NULL){
		return NULL;
	}

	reverse(head->next);
	cout<<head->data;

	return head;
}


int main(){

	node *n1 = new node(1);
	node *n2 = new node(2);
	node *n3 = new node(3);
	node *n4 = new node(4);
	node *n5 = new node(5);
	node *n6 = new node(6);
	node *n7 = new node(7);
	node *head = n1;
	n1->next =n2;
	n2->next = n3;
	n3->next = n4;
	n4->next =n5;
	n5->next = n6;
	n6->next = n7;
	node * nh = reverse(head);
	print(nh);


}
