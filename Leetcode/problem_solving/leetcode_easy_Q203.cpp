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



node * delete_pos(node*head,int pos){

    node*temp=head;
    int count =0;
    if(pos ==0){
        node*temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    while(temp!=NULL && count!=pos-1){
        count++;
        temp=temp->next;
    }
    node*a = temp->next->next;
    node*del = temp->next;
    temp->next = a;
    delete del;
    cout<<head->val;
    return head;
}


node* removeElements(node* head, int val){
    int i=0;
    node *temp=head;
    if(head==NULL) return NULL;
    // if(head->next==NULL )
    ++i;
    while(temp!=NULL){
        if(temp->val==val){
            // cout<<temp->val<<" ";
           delete_pos(head,i+1);
        }
        temp=temp->next;
        continue;
    }
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
    node * n1 = new node(9);
    head = n1;
    node * n2 = new node(2);
    node * n3 = new node(3);
    node * n4 = new node(4);
    node * n5 = new node(4);
    
    n1->next = n2;
    n2->next =n3;
    n3->next = n4;
    n4->next = n5;
    head = removeElements(head,4);
    print(head);

}