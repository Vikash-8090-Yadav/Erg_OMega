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
    
int length(node * head){
    int count = 0;
    node *temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}   
void print(node * head){
    // int count = 0;
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        // count++;
        temp=temp->next;
    }
    // return count;
}
node* middleNode(node* head) {
    node*temp = head;
    int len = length(head);
    int original_len = len/2+1;
    if(len==1){
        return head;
    }
    for(int i = 1;i<original_len-1;++i){
        temp=temp->next;
    }
    head=temp->next;
    return head;
}

int main(){
    // init();
    // mkaing nodes using statically
    node * head = NULL;
    node n1(1);
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    node n6(6);
    head = &n1;
    (n1).next = &n2;
    (n2).next = &n3;
    (n3).next = &n4;
    (n4).next = &n5;
    (n5).next = &n6;
    node* head1 = middleNode(head);
    print(head1);

}