
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
node *deleting_tail_end(node*head){
	node*temp = head;
	while(temp->next->next!=NULL){
		temp = temp->next;
	}
	node*a = temp->next;
	temp->next =NULL;
	delete a;
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
	head = deleting_tail_end(head);
	print(head);

	// head = adding_tail_end(head, data);
	

}