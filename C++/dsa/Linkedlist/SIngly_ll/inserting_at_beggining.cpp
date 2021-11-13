
#include <bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int data){
		this->data = data;
		next=NULL;
	}
};

node *takeinput(){
	int data;
	cin>>data;
	node*head = NULL;
	while(data!=-1){
		node*newnode = new node(data);
		if(head==NULL){
			head = newnode;
		}
		else{
			node*temp = head;
			while(temp->next!=NULL){
				temp = temp->next;
			}
			temp->next = newnode;
		}
		cin>>data;
	}
	return head;

}

node *inserting_at_first(int data , node*head){
	node*newnode = new node(data);
	node*temp = head;
	newnode->next = temp;
	head = newnode;
	return head;
}

void print(node*head){
	node*temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
     
int main(){
	node*head =takeinput();
	
	print(head);

	cout<<"After adding the elemnt in the linked list:"<<endl;
	cout<<"Enter the element to be added"<<endl;
	int data;cin>>data;
	node*head1 = inserting_at_first(data,head );
	print(head1);

}