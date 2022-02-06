/*
 * Location: /home/vikash/Desktop/all_git_files/Erg_OMega/C++/dsa/Linedlist/SinglyLinkedList/
 * Created by : Vikash kumar yadav
 * Date , time : 6-02-22 , 17-07
 * Day : Sunday
 * topic : Reversing a linkedlist */

#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node *next;
	node(int data){
		this->data=data;
		next =NULL;
	}
};

node *reverseList(node *head){
	if(head ==NULL) return NULL;
	node *current = head;
	node * pre = NULL;
	node *n = NULL;
	while(current!=NULL){
		n = current->next;
		current->next = pre;
		pre = current;
		current = n;
		//pre = current;
	}
	return pre;
}

void print(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp =temp->next;
	}
}

int main(){
node * head =NULL;
node *n1 = new node(1);
node *n2 = new node(2);
node *n3 = new node(3);
node *n4 = new node(4);
head =n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;
node *h1 = reverseList(head);
print(h1);
}
