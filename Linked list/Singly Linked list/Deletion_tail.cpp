#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

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

Node* conversion(vector<int>&arr){
    Node* head = new Node (arr[0]);
    Node* mover = head;
    for (int i = 1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* mover = head;
    while(mover!=NULL){
        cout<<mover->data<<" ";
        mover=mover->next;//here we are not torturing the main ll, only by copying it to mover
    }
}
Node* removetail(Node* head){
    Node* temp = head;
    if (head->next == NULL || head == NULL)
    {
        cout<<"This is invalid";
        return NULL;
    }
    
    while(temp->next->next!=NULL){
        temp = temp -> next;
    }
    delete(temp->next);
    temp->next=nullptr;//when you are assigning to nullptr
    return head;
}
int main(){
    vector<int>arr={1, 25, 8, 3};
    Node* head = conversion(arr);
    head = removetail(head);
    print(head);
    return 0;
}