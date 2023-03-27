#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;node *next;
		node(int data){
			this->data=data;
			next=NULL;
		}
};


node * insert(node *head,int val , int data){
	int i =0;
	node *temp = head;
	node *newnode = new node(data);

	if(val ==0){
		node * store = head;
		head = newnode;
		head->next = store;
		return head;
	}
	while(temp!=NULL){
		temp = temp->next;
		if(i==val-1){
			break;
		}
		++i;
	}
	node *store = temp->next;
	temp->next = newnode;
	newnode->next=store;
	return head;
}


void print(node *head){
	node * temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main(){
	node *n1 = new node(1);
	node *n2 = new node(2);
	node *n3 = new node(3);
	node *n4 = new node(4);
	node *n5 = new node(5);
	node *head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	node *insertH =insert(head,0,100);
       	print(insertH);	
	
}
