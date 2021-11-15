#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*next;
	node(int data){
		next = NULL;
		this->data = data;
	}
};

node*takeinput(){
	int data;
	cin>>data;
	node*head = NULL;
	while(data!=-1){
		node*newnode = new node(data);
		if(head==NULL){
			head = newnode;
		}
		else{
			node*temp= head;
			while(temp->next!=NULL){
				temp = temp->next;
			}
			temp->next =newnode;
		}
		cin>>data;
	}
	return head;
}

node *remove_duipicates(node*head){
	//eROOR : segmmentation fault; 
	node*temp = head;
	// while(temp1!=NULL){
// 		if(temp1->data!=temp1->next->data){
// 			cout<<temp1->data<<" "<<temp1->next->data<<" "<<endl;
// 			temp1=temp1->next;
	
// 		}  
// 		else{
// 			temp1->next = temp1->next->next;
// 		}
		
// 	}
// 	return head;
	node*t1  = head;
	node*t2 = head->next;
	if(t1==NULL || t2==NULL){
		cout<<"EMPTY";
		return head;
	}
	else{
		while(t2->next!=NULL){
			if(t1->data == t2->data){
				t2=t2->next;
			}
			else{
				node*a =t1;
				t1->next = t2;
				t1 = t2;
				t2= t2->next;
				// delete a;
			}
		}
	}
		// t1->next=t2;
	t1->next = t2;
	
	return head;
}


void print(node*head){
	node*temp =head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	node*head = takeinput();
	// print(head);
	head = remove_duipicates(head);
	print(head);
}