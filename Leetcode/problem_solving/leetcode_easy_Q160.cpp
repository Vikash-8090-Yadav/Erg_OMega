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

node *getIntersectionNode(node *headA, node *headB){
    // map<node*,int> ma;
    set<node*> ma;
    node*temp = headA;
    while(headA!=NULL){
        ma.insert(temp);
        headA=headA->next;
        // temp=temp->next;
    }
    node *ans =NULL;
    bool track = false;
    node *tempB = headB;
    while(headB!=NULL){
        if(ma.find(headB)!=ma.end()){
            return headB;
            // cout<<ans->val<<endl;
        }
        headB=headB->next;
        // tempB=tempB->next;
    }
    // if(track){
    //     return ans;
    // }
    return NULL;
}

void print(node*head){
    node*temp = head;
    while(temp!=NULL){
        cout<<temp<<" ";
        temp = temp->next;
    }
}


int main(){
    node *headA =NULL;
    node *headB=NULL;

    node *na1 = new node(4);
    node *na2 = new node(1);
    node *na3 = new node(8);
    node *na4 = new node(4);
    node *na5 = new node(5);
    headA = na1;
    na1->next= na2;
    na2->next= na3;
    na3->next= na4;
    na4->next= na5;


    node *nb1 = new node(5);
    node *nb2 = new node(6);
    node *nb3 = new node(1);
    node *nb4 = new node(8);
    node *nb5 = new node(4);
    node *nb6 = new node(5);
    headB = nb1;
    nb1->next= nb2;
    nb2->next= nb3;
    nb3->next= nb4;
    nb4->next= nb5;
    nb5->next= nb6;
    // print(headB);cout<<endl;
    // print(headA);
    
    cout<<(getIntersectionNode(headA,headB));

}
