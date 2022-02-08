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

vector<int> print(node *head){
	node *temp = head;
	vector<int> v1;
	while(temp!=NULL){
		v1.push_back(temp->data);
		temp = temp->next;
	}
	return v1;
}
int length(node *head){
	int cnt=0;
	node *temp = head;
	while(temp!=NULL){
		cnt++;
		temp = temp->next;
	}
	return (cnt/2)-1;
}

node* reverse(node* head){
        node* pre = NULL;
        node* curr = head;
        while(curr!=NULL){
            node* n = curr->next;
            curr->next=pre;
            pre = curr;
            curr = n;
        }
        return pre;
    }

int pairSum(node* head){
	int len = length(head);
	node *temp = head;
	vector<int> v1 = print(temp);
	node *h1 = reverse(head);
	vector<int> v2 = print(h1);
	int cnt =0;
	vector<int> v3;
	int i=0;
	while(cnt<=len){
		v3.push_back(v1[i]+v2[i]);
		++i;
		cnt++;
	}
	sort(v3.begin(),v3.end(),greater<int>());
	// return 0;
	return v3[0];
}
int main(){
	node *head = NULL;
	node *n1 = new node(1);
	node *n2 = new node(2);
	node *n3 = new node(3);
	node *n4 = new node(4);
	node *n5 = new node(5);
	node  *n6 = new node(6);
	head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	// print(head);
	cout<<pairSum(head);
}