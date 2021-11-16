#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*next;
	node(int data){
		this->data=data;
		next=NULL;
	}
};


node*takeinput(){
	int data;
	cin>>data;
	node*head=NULL;
	while(data!=-1){
		node*newnode = new node(data);
		if(head==NULL){
			head = newnode;
		}
		else{
			node*temp = head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next = newnode;
		}
		cin>>data;
	}
	return head;
}

void midpoint(int len,node*head){
	node*slow = head;
	node*fast=head->next;
	if(len%2){
		while(fast!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		cout<<slow->data<<" ";
	}
	else{
		while(fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		cout<<slow->data<<" ";
	}
}

void print(node*head){
	node*temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
int length(node*head){
	int len =0;
	node*temp = head;
	while(temp!=NULL){
		temp=temp->next;
		len++;
	}
	return len;
}

int main(){
	node*head = takeinput();
	int len1 = length(head);
	cout<<len1<<" ";
	midpoint(len1,head);


}