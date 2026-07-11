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
Node* convert2ll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}
int searching(Node* head, int value){
    int found=0;
    Node* temp = head;
    while(temp != NULL){
        if (temp->data == value)
        {
            found = 1;
            // return 1;   
        }
        temp = temp->next;
    }
    if (found==1)
    {
        cout<<"The value has founded";
    }else{
        cout<<"The value has not founded";
    }
    
}
int main(){
    vector<int>arr={1,2,3,4,5};
    Node* head = convert2ll(arr);
    searching(head, 12);
    return 0;
}