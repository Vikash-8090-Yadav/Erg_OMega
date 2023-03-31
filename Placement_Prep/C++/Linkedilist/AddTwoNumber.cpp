#include <bits/stdc++.h>
using namespace std;

class  node {
	public:
		int data;
		node *next;
		node(int data){
			this->data=data;
			next = NULL;
		}
};


node * AddTwoLL(node *head1 , node *head2){
	node *temp1 = head1;
	node *temp2 = head2;
	int last =-1,first =-1;
	node *head = NULL;
	node *temp= NULL;
	int sum =0;
	while(temp1!=NULL or temp2!=NULL){
		if(last!=-1 and last !=0 ){
			if(temp1==NULL){
				sum = temp2->data+last;
			}
			if(temp2==NULL){
				sum = temp1->data+last;
			}
			if(temp1!=NULL and temp2!=NULL){
			
				sum = temp1->data+temp2->data+last;
			}
		}

		if(last ==0 || last ==-1){

			if(temp1==NULL){
                                sum = temp2->data;
                        }
                        if(temp2==NULL){
                                sum = temp1->data;
                        }
			if(temp1!=NULL and temp2!=NULL){
				sum = temp1->data +temp2->data;
			}
		}
		if(sum >9){
			first = sum%10;
			last = sum/10;
			node *newnode = new node(first);
			if(head ==NULL){
				head  = newnode;
				temp = head;
			}
			else{
				temp->next = newnode;
				temp = temp->next;
			}


		}
		else{
			last =0;
			node *newnode = new node(sum);
			 if(head ==NULL){
				 head = newnode;
				 temp = head;
			 }
			 else{
				 temp->next = newnode;
				 temp = temp->next;
			 }
		}
		if(temp1!=NULL and temp2!=NULL){
			temp1 = temp1->next;
	                temp2=temp2->next;

		}
		else if(temp1!=NULL){
			temp1 = temp1->next;
		}
		else {
			temp2=temp2->next;
		}
		        cout<<"sum:"<<sum<<" ";
			sum = 0;

	}
	

	//if(head1==NULL){
	//	while(head2!=NULL){
//			if(last!=0){

//			}
//		}
	//}

	if(last!=0){
		node *newno = new node(last);
		temp->next = newno;
		temp = temp->next;
	}
	
	return head;
	

}

void print(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

int main(){
	node *n1 = new node(2);
	node *n2 = new node(4);
	node *n3 = new node(3);
	//node *n4 = new node(4);
	node *nn1 = new node(5);
	node *nn2 = new node(6);
	node *nn3 = new node(4);
	node *h1 = n1;
	node *h2  = nn1;
	n1->next = n2;
	n2->next = n3;
	//n3->next = n4;
	nn1->next = nn2;
	nn2->next = nn3;

	node *oh = AddTwoLL(h1 , h2);

	print(oh);

}
