#include <bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node *next;
	node (int data){
		this->data = data;
		this->next = NULL;
	}
};

int len(node *head){
	node *temp = head;
	int i =0;
	while(temp!=NULL){
		++i;
		temp = temp->next;
	}
	return i;
}

node * cal_last(node *head){
	node *temp = head;
	while(temp->next->next!=NULL){
		temp = temp->next;

	}
	return temp;
}

node* swapNodes(node* head, int k){
	int k1 = len(head);
	if(k1%2!=0 && ((k1/2)+1)==k){
		return head;
	}
	if(k ==1 || (k == k1)){
		node *temp2 = cal_last(head);
		node * a= head->next;
		node *b = head;
		head = temp2->next;
		(temp2->next)->next = a;
		temp2->next = b;
		b->next = NULL;
		return head;
	}
	node *temp = head;
	int i = 1;
	while(i<k-1 && temp!=NULL){
		temp= temp->next;
		++i;
	}
	int i1 = abs(len(head)-k)+1;
	node *temp1=head;
	int i2 =1;
	while(i2<i1-1 && temp1!=NULL){
		i2++;
		temp1=temp1->next;
	}
	node *cn1 = temp->next;
	node *cn = temp->next->next;
	temp->next = temp1->next;
	node * a=temp1->next->next;
	temp->next->next = cn;
	// cout<<cn<<" ";
	// cout<<temp1<<" ";
	cn->next=cn1;
	cn1->next = a;
	return head;
}






 void display(node *head){
 	node *temp = head;
 	while(temp!=NULL){
 		cout<<temp->data;
 		temp = temp->next;
 	}
 }

int main(){
	node *head = NULL;
	node * n1 = new node(1);
	node * n2 = new node(2);
	node * n3 = new node(3);
	node * n4 = new node(4);
	head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	// n4->next = n5;
	node* h1 = swapNodes(head,3);
	display(h1);
	// cout<<head1->data;
}
