#include <bits/stdc++.h>
using namespace std;

class node {
	public:
	int data;
	node *next;
	node(int data){
		this->data=data;
		next=NULL;
	}
};

node * elimnate( node *head){
	node *slow = head;
	node *fast = head->next;
	while(fast->next!=NULL){
		if(slow->data == fast->data){
			fast = fast->next;
		}
		else{
			slow->next = fast;
			slow = fast;
			fast = fast->next;
		}
	}

	if(slow->data == fast->data){
		slow->next = NULL;
		return head;
	}
	slow ->next = fast;
	return head;
}
   


void print(node *head){
	node * temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
		
	}
}


int main(){

	node *n1 = new node(1);
	node *n2 = new node(1);
	node *n3 = new node(2);
	node *n4 = new node(4);
	node *n5 = new node(4);
	node *n6 = new node(4);

	node *head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;

	node *newhead  = elimnate(head);
	print(newhead);




	
}
