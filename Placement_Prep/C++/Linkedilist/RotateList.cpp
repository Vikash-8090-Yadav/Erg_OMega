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


int len1(node *head){
	node *temp = head;
	int len = 0;
	while(temp!=NULL){
		len++;
		temp = temp->next;
	}
	return len;
}

node *RotateLL(node *head, int n){
	int len = len1(head);
	int i =0,pos;
	if(n>len){
		
		pos=n%len;
		if(pos==0){
			return head;
		}
		pos = len -pos;
	}
	else{
		pos = len-n;
		if(pos==0){
			return head;
		}
	}
	node *temp = head;
	while(temp!=NULL){
		if(i==pos-1){
			break;
		}
		++i;
		temp = temp->next;
	}
	node *attach = temp->next;
	temp->next=NULL;
	node *temp2 = attach;
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	temp2->next=head;
	head = attach;
	return head;
}

void print(node *head){
	 node*temp = head;
	 while(temp!=NULL){
		 cout<<temp->data<<" ";
		 temp=temp->next;
	 }
}


int main(){

	node * n1 = new node(0);
	node *n2 = new node(1);
	node *n3 = new node(2);
	//node *n4 = new node(4);
	//node *n5 = new node(5);

	node *head = n1;
	n1->next = n2;
	n2->next = n3;
	//n3->next = n4;
	//n4->next = n5;

	node *m = RotateLL(head,3);
	print(m);


}
