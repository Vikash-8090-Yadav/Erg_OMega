#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node *next;
		node(int data){
			this->data=data;
			next=NULL;
		}
};


int len(node *head){
	int l =0;
	node *newnode = head;
	while(newnode!=NULL){
		l++;
		newnode = newnode->next;
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


node * append(node *head,int pos , int len){
	if(pos==len){
		return head;
	}
	int orignalpos = len-pos;int i =0;
	node *temp = head;
	while(temp!=NULL){
		if(i==orignalpos-1){
			break;
		}
		temp = temp->next;
		++i;
	}
	node *head2=temp->next;
	temp->next = NULL;
	node *temp2 = head2;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next = head;
	return head2;
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
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	int ln = len(head);
	node *newhead = append(head,6,ln);
	print(newhead);

}
