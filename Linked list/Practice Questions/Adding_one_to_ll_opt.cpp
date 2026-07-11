#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
//
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
void printList(Node* head){
    Node* temp = head;//temp = 1
    while(temp!=NULL){
         if(temp->next==NULL){
            cout<<temp->data;
            return;
        }
        cout<<temp->data;//print 1; 7; 9
        // cout<<"->";//print 1->7->9
       
        temp = temp->next;//temp = 7; 9; 0
    }
}
void insertNode(Node* &head, int val){//if here we don't use head as reference....the head will always stays null in every function calling; 
    //head = NULL and val = 1
    Node* node_new = new Node (val);//node_new = 1
    if(head==NULL){
        head = node_new;//head = 1
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = node_new;
    return;
}
int helper(Node* head){ 
    Node* temp = head;
    if(temp == NULL){
        return 1;
    }
    int carry = helper(temp->next);
    temp->data = temp->data + carry;
    if(temp->data < 10){
        return 0;
    }
    temp->data = 0;
    return 1;
}
Node* Addition(Node* head){
    int carry = helper(head);
    if(carry == 1){
        Node* new_node = new Node (1);
        new_node->next = head;
        return new_node;
    }
    return head;
}

int main(){
    Node* head = NULL;
    insertNode(head,1); 
    insertNode(head, 9);
    // cout<<head->next<<endl;
    Node* new_head = Addition(head);
    printList(new_head);
    return 0;
}
//time complexity is O(3n)==O(n)
//space complexity is O(2n)+O(1) = O(n)///This is a brute approach
