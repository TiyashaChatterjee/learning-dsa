#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data= data1;
        next = next1;
    }
    public:
    Node(int data1){
        data=data1;
        next = nullptr;
    }
};

Node* conversion(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node (arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<head->data<<" ";
        head = head -> next;
    }
}

Node* remove(Node* head, int value){
    if(head == NULL){
        cout<<"This is an invalid case";
        return 0;
    }
    if(value == head->data){
        head = head->next;
        delete(head);
        return head;    
    }
    Node* temp = head;
    Node* prev = NULL;
    while (temp!=NULL)
    {
        if(value == temp->data){
            prev->next = prev->next->next;
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

int main(){
    vector<int>arr={1, 2, 3, 4, 5};
    Node* head = conversion(arr);
    head = remove(head, 3);
    print(head);
    return 0;
}