#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data1 = data;
        next1 = next;
    }
    Node(int data1){
        data1 = data;
        next = nullptr;
    }
};
//conversion b/w array to linkedlist...
Node* convert2ll(vector<int> &arr){//we have taken an address of vector
    Node* head = new Node(arr[0]);//creating a node of one element of the array vector, and assigning to Node pointr head
    Node* mover = head;//then a new node pointer is created and assigned the head to it; mover = head = 2
    for (int i = 1; i < arr.size(); i++)//loop is running after the head, means arr[1] to size of the array
    {
        Node* temp = new Node(arr[i]);//1. temp = new node(5)
        mover->next=temp;//2->5, temp = 5
        mover = temp;//
    }
    return head;
}

int main(){
    vector<int>arr={2, 5, 7, 8};
    Node* head = convert2ll(arr);
    // cout<<head->data;
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}