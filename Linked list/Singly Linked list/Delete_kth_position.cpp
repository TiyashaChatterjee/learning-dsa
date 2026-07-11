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
Node* removekth(Node* head, int k){
    int c=1;
    if (head==NULL)
    {
        return head;
    }
    if(k==1){
        Node*temp = head;//head will be stored in temp
        head = head->next;//head upgrade
        delete(temp);//delete the temp
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while (temp != NULL)
    {
        c++;
        if(c == k){
            prev->next = prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;//upgradation of prev
        temp=temp->next;
    }
    if(c<k){
        cout<<"This is an invalid case";
        return 0;
    }
    
    return head;
} 

int main(){
    vector<int>arr={1, 25, 8, 3};
    Node* head = conversion(arr);
    int k;
    cout<<"Enter k: ";
    cin>>k;
    head = removekth(head, k);
    print(head);
    return 0;
}