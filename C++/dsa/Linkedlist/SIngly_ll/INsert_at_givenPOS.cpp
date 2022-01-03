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


node *insert_at_POa(node *head , int pos,int data){
	node*temp = head;
	node*curr=NULL;
	node*after = NULL;
	int count = 0;
	if(pos ==0){
		node*temp = head;
		node*a = temp->next;
		node * newnode = new node(data);
		newnode->next = a;
		head = newnode;

		// temp->next = newnode;

		return head;

	}
	while(temp!=NULL && count!=pos-1){
		count++;
		temp=temp->next;
	}
	if(temp!=NULL){
		curr = temp;


		node * newnode = new node(data);
		after = curr->next;
		curr->next =newnode;
		newnode->next = after;
	
	}
	return head;

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
	// position is by default indexing 0 according to code 
	int pos;cin>>pos;int data;cin>>data;
	node*head1=insert_at_POa(head,pos,data);
	
	print(head1);
}