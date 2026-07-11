#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;//It is storing the value of next node

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* Odd_even(Node* head){
    Node* temp = head;
    Node* odd = new Node (-1);
    Node* even = new Node (-2);
    Node* Odd_head = odd;
    Node* Even_head = even;
    while(temp != NULL){
        if(temp->data % 2 == 0){
            Even_head->next = new Node (temp->data);
            Even_head = Even_head -> next;
        }else{
        Odd_head->next = new Node(temp->data);
        Odd_head = Odd_head -> next;
        }
        temp = temp->next;
    }
    Even_head->next = odd->next;
    Node* new_head = even->next;
    Odd_head->next = nullptr;
    delete(odd);
    delete(even);
    return new_head;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
}
int main(){
    Node* head = new Node(8);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Node* new_head = Odd_even(head);
    // cout<<new_head->data<<endl;
    print(new_head);
    return 0;
}
//Here I am just traversing the Nodes, so O(N)->T.C
//extra space is taken while creating dummy nodes, so S.C-> O(N)
    