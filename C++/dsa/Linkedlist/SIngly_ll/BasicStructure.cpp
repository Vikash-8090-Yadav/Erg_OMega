#include <bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int data){
		this->data = data;
		next = NULL;
	}
};

void print(node*head){
	node*temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;

	}
}

int main(){
	//statically
	node *head = NULL; 
	// node n1(10);
	// head = &n1;
	// node n2(20);
	// n1.next= &n2;
	// node n3(50);
	// n2.next = &n3;
	// node n4(60);
	// n3.next=&n4;
	// node n5(67);
	// n4.next = &n5;
	// node n6(78);
	// n5.next = &n6;
	// print(head);
	// dynamically
	node *n1 = new node(10);
	head = n1;
	node *n2 = new node(20); // am removing the address of operator beacuse n2 itshelf is storing the address of the node (20): 
 	n1->next = n2;
	node *n3 = new node(30);
	n2->next = n3;
	node *n4 = new node(40);
	n3->next = n4;
	node *n5 = new node(50);
	n4->next = n5;

}