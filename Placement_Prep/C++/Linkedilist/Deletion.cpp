#include <bits/stdc++.h>
using namespace std;


class node{
	public:
		int data;
		node *next ;
		node(int data){
			this->data=data;
			next=NULL;
		}
};

int len(node *head){
	int l=0;
	node *temp = head;
	while(temp!=NULL){
		l++;
		temp = temp->next;
	}
	return l;
}


void print(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

node *del(node *head , int pos,int len){
	if(pos == 0){
		head = head->next;
		return head;
	}
	int i=0;
	node *temp = head;
	while(temp!=NULL){
		if(i==pos-1){
			break;
		}
		temp=temp->next;
		++i;
	}
	if(pos ==len){
		temp->next=NULL;
		return head;
	}
	temp->next = temp->next->next;
	return head;

}

int main(){
	node *n1 = new node(1);
	node *n2 = new node(2);
	node *n3 = new node(3);
	node *n4 = new node(4);
	node *n5 = new node(5);
	node *n6 = new node(6);
	node *head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	int length = len(head);
	cout<<"length of the linkedlist is"<<length<<endl;
       node *head1 = del(head,5,length);

       print(head1);



}
