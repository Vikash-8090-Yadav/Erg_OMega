#include <bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node *next;
	node(int data){
		this->data=data;
		next = NULL;
	}
};


int len(node *head){
	node *temp  = head;
	int len =0;
	while(temp!=NULL){
		len++;
		temp = temp->next;
	}
	return len;
}

node *remove(node *head , int n ){
	int len1 = len(head);
	cout<<"len"<<len1<<endl;
	int pos= len1 -n;
	int i =0;
	node *temp =head;
	if(pos==0){
		
		node *a = head;
		head = head->next;	
		return head;
	}
	while(temp!=NULL){
		if(i==pos-1){
			break;
		}
		++i;
		temp = temp->next;
	}
	node * a = temp->next;
       node *b = temp->next->next;

	temp->next = b;  
    delete a;	
       	return head;	
}

void print(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	node *n1 = new node(1);
	node *n2 = new node(2);
	node *n3 = new node(3);
	node *n4 = new node(4);
	node *n5 = new node(5);
	node *head = n1;
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = n5;
	node *m = remove(head,1);
	print(m);
}
