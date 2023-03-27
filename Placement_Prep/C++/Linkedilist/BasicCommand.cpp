#include <bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node * next;
		Node(int data){
			this-> data = data;
			next = NULL;
		}
};

void print(Node *head){
	Node *n1= head;
	while(n1!=NULL){
		cout<<n1->data<<endl;
		n1 = n1->next;
	}
	cout<<head->data;
}

int main(){


// statically
 	/*
	Node n1 (1);
	Node *head = &n1;
	Node n2 (2);
	n1.next = &n2;
	cout<<n1.data<<" "<<n2.data<<endl;
	print(head);
	*/
	// dynamically
	//
	Node *n1 = new Node(10);
       	Node *n2 = new Node(12);  
   	n1->next =n2;	

}
