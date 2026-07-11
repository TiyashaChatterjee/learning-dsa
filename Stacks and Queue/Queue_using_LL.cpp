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
Node* start = nullptr;
Node* end = nullptr;

void push(int x){
    Node* new_node = new Node {x};
    if(start == NULL && end == NULL){
        start = new_node;
        end = new_node;
        return;
    }
    new_node->next=start;
    end=end->next;
}  
// void pop(){
//     Node* temp = top;
//     top = top -> next;
//     delete(temp);
// }
// Node* toper(){
//     return top;
// }
void display(){
    Node* temp = start;
    for(Node* i = start; i >= end; i++){
        cout<<i->data;
    }
}
int main(){
    push(5);
    push(8);
    display();
    return 0;
}