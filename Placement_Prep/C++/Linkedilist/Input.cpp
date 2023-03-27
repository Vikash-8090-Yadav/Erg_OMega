#include <bits/stdc++.h>
using namespace std;


class Node{
	public:
		int data;
		Node*next;
		Node(int data){
			this->data=data;
			next=NULL;
		}
};



void print(Node *head){
	Node *n1 = head;
	while(n1!=NULL){
		cout<<n1->data<<endl;
		n1=n1->next;
	}
}

Node *input(){
	int data;cin>>data;

	Node*head = NULL;
	Node*n1 = NULL;
	while(data !=-1){
		Node *newnode = new Node(data);
		if(head ==NULL){
			head = newnode;
			n1 = head;
		}
		else{
			n1->next = newnode;
			n1 = n1->next;


		}
		cin>>data;
	}
	return head;
}

int main(){
Node *head = input();
print(head);
}
