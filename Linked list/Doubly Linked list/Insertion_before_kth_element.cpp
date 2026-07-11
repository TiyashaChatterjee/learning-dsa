#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* convert(vector<int>&arr){
    // int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i =1; i <arr.size(); i++)
    {
        Node* temp = new Node (arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* insert_berore_head(Node* head, int value){
    if (head==NULL)
    {
        return NULL;
    }
    Node* newhead = new Node(value, head, nullptr);
    head->back = newhead;
    return newhead;
}
Node* insert_before_tail(Node* head, int value){
    Node* temp = head;
    Node* prev;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    prev = temp->back;
    Node* newtail = new Node (value, temp, prev);
    prev->next = newtail;
    temp->back = newtail;
    return head;
}
Node* remove(Node* head, int k, int value){
    int count = 0 ;
    Node* temp = head;
    if(head==NULL){
        return NULL;
    }
    while (temp!=NULL)
    {
        count++;
        if (count==k)
        {
            break;
        }
        temp = temp -> next;
    }
        Node* prev = temp->back;
        Node* front = temp->next;
   
    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if(prev == NULL){
        return insert_berore_head(head, value);
    }
    else if(front == NULL){
        return insert_before_tail(head, value);
    }
    else{
        Node* newnode = new Node(value, temp, prev);
        prev->next = newnode;
        temp->back = newnode;
        return head;
    }
    
    return head;
}
int main(){
    vector<int>arr={1, 2, 3, 8, 10};
    Node* head = convert(arr);
    head = remove(head, 1, 6);
    print(head);
    return 0;
}