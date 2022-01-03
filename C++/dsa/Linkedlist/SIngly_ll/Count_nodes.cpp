#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node * next;
	node(int data){
		this->next=NULL;
		this->data = data;
	}
};


int countnodes(node * head){
	int count =0;
	node *temp = head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}

int main(){

// making nodes dynamically
	node * n1 = new node(1);
	node * head = n1;
	node * n2 = new node(2);
	node * n3 = new node(3);
	
	node * n4 = new node(4);
	
	node * n5 = new node(5);
	
	node * n6 = new node(6);
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	cout<<countnodes(head);
}