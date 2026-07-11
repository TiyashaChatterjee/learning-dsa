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
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
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
int lengthofll(Node* head){
    int count=0;
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data;//printing the elements of the linked list
        temp = temp->next;
        count++;
    }
    cout<<endl;
    return count;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    Node* head = convert2ll(arr);
    cout<<lengthofll(head);
    return 0;
}