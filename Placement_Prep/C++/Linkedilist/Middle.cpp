#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node *next;
		node(int data){
			this->data = data;
			next = NULL;
		}
}

int mid (node *head){

	node *slow = head;
	node *fast = head->next;
	while(fast->next !=NULL and fast->next->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
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
	int ans = mid(head);
	cout<<ans<<endl;



}
