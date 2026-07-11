#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int d, Node* next1){
        int data = d; 
        next = next1;
    }
    Node(int d){
        data = d;
        next = nullptr;
    }
};
Node* top = nullptr;
void push(int x){
    Node* new_node = new Node {x};
    if(top == NULL){
        top = new_node;
        return;
    }
    Node* head = top;
    new_node->next = head;

    top = new_node; 
}  
void pop(){
    Node* temp = top;
    top = top -> next;
    delete(temp);
}
Node* toper(){
    return top;
}
void display(){
    Node* temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main(){
    push(5);
    push(8);
    pop();
    push(9);
    toper();
    display();
    return 0;
}