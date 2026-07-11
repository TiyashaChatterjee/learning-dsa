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
Node* removehead(Node* head){
    if (head==NULL || head->next == NULL)
    {
    //    cout<<"thi"
        return NULL;//because there is no valid node to return
    }
    
    Node* prev = head;
    head = head -> next;
    head->back = nullptr;
    prev->next = nullptr;
    return head;
}
Node* removetail(Node* head){
    Node* temp = head;
    Node* prev;
    while(temp->next != NULL){
        // prev = temp;
        temp = temp->next;
    }
    prev = temp->back;
    prev->next = nullptr;
    temp->back=nullptr;
    delete(temp);
    return head;
}
Node* remove(Node* head, int value){
    // int count = 0 ;
    Node* temp = head;
    if(head==NULL){
        return NULL;
    }
    while (temp!=NULL)
    {
        // count++;
        if (temp->data==value)
        {
            break;
        }
        temp = temp -> next;
    }
        Node* prev = temp->back;
        Node* front = temp->next;
   
    if (prev == NULL && front == NULL)
    {
        // delete temp;
        return NULL;
    }
    else if(prev == NULL){
        return removehead(head);
    }
    else if(front == NULL){
        return removetail(head);
    }
    else{
        prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete(temp);
    }
    
    return head;
}
int main(){
    vector<int>arr={1, 2, 3, 8, 10};
    Node* head = convert(arr);
    head = remove(head, 8);
    print(head);
    return 0;
}