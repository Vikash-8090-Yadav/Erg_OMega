#include <bits/stdc++.h>
using namespace std;

class node {
	public : 
		int data;
		node *next;
		node(int data){
			this->data=data;
			next = NULL;
	}

};

node* merge1(node *head1  , node *head2){
	node *tf=NULL;node*h1=head1; node*h2=head2;
	node *hf = NULL;
	if(h1->data >h2->data){
		tf = h2;
		hf = h2;
		h2 = h2->next;		
	}
	else{
		tf=h1;
		hf = h1;
		h1 = h1->next;
	}
	cout<<tf->data<<" "<<endl;
	while(h1!=NULL && h2!=NULL){
		if(h1->data > h2->data){
			tf->next=h2;
			tf = h2;
			h2 = h2->next;
			
		}
		else{
			tf->next = h1;
			tf = h1;
			h1 = h1->next;
			//cout<<"fb"<<" "<<endl;
		}
	}
	if(h1==NULL and h2!=NULL){
		tf->next = h2;
		return hf;
	}
	if(h2==NULL and h1!=NULL){
		tf->next =h1;
		return hf;
	}
	return hf ;

}


void print(node *h){
	node *temp = h;
	while(h!=NULL){
		cout<<h->data<<" ";
		h = h->next;
	}
}

int main(){
	node *n1 = new node(1);
	node *n2 = new node(5);
	node *n3 = new node(10);
	node *n4 = new node (12);
	node *n5 = new node(20);

	node *nn1 = new node(2);
	node *nn2 = new node(3);
	node *nn3 = new node(6);
	node *nn4 = new node(11);

	node *h1 = n1;
	node *h2 = nn1;
	n1->next = n2;
	n2->next = n3;
	n3->next =n4;
	n4->next =n5;

	nn1->next = nn2;

	nn1->next =nn2;
	nn2->next =nn3;
	nn3->next = nn4;
	//print(h1);
	node *m = merge1(h1 , h2);
	print(m);
}
