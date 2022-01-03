#include <bits/stdc++.h>
using namespace std;
class node{
public: 
    int val;
    node*next;
    node(int val){
        this->val=val;
        next=NULL;
    }

};


node * deleteDuplicates(node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    node *t1=head;
    node *t2 = head->next;
    while(t2!=NULL){
        if(t1->val == t2->val){
            t2=t2->next;
            continue;
        }
        // t2=t2->next;

        t1->next=t2;
        t1=t2;

        // t2=t2->next;

    }
    t1->next=t2;
    return head;
}

void print(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    node* head = NULL;
    node * n1 = new node(1);
    head = n1;
    node * n2 = new node(1);
    node * n3 = new node(1);
    node * n4 = new node(4);
    node * n5 = new node(4);
    
    n1->next = n2;
    n2->next =n3;
    n3->next = n4;
    n4->next = n5;
    head = deleteDuplicates(head);
    print(head);

}
