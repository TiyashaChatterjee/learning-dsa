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

Node* conversion(vector<int>&arr){
    Node* head = new Node (arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* mover = new Node(arr[i]);
        temp->next = mover;
        temp = mover;
    }
    return head;
}
Node* Midnode(vector<int>&arr, Node* head){
    if(head==NULL || head->next==NULL){ // atleast one of the condition is going to true
        return NULL;
    }
    Node* temp = head;
    int num = arr.size();
    for (int i = 0; i < num/2; i++)
    {
        temp = temp->next;
    }
    
    return temp;
}
Node* print(Node* temp){
    // Node* temp = head;
    cout<<temp->data;
    // return head;
}
int main(){
    vector<int>arr = {1};
    Node* head = conversion(arr);
    Node* temp = Midnode(arr, head);
    print(temp);
    return 0;
}