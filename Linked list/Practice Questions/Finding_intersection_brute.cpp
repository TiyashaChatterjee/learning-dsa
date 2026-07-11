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
void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertNode(Node* &head, int val){//if here we don't use head as reference....the head will always stays null in every function calling; 
    //head = NULL and val = 1
    Node* node_new = new Node (val);//node_new = 1
    if(head==NULL){
        head = node_new;//head = 1
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = node_new;
    return;
}
void intersection(Node* head1, Node* head2){
    Node* temp1 = head1;//temp1 = 3
    while(temp1 != NULL){
        Node* temp2 = head2;//temp2 = 1; temp2 = 1
        while(temp2 != NULL){
            if(temp1 == temp2){//false; false; false; false; false:: false; false; false
                cout<<"You've got the intersection, which is: ";
                cout<<temp1->data;
                return;
            }
            temp2 = temp2 -> next;//temp2 = 3; temp2 = 1; temp2 = 2; temp2 = 4:: temp2 = 3; temp2 = 1; temp2 = 2
        }
        temp1 = temp1 -> next;//temp1 = 2
    }
    cout<<"Sorry there is no intersection";
    return;
}
int main(){
    //first linked list1
    Node* head = NULL;
    insertNode(head,1);//
    insertNode(head,3);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,4);
//preparations for another linkedlist
    Node* head1 = head;
    head = head->next->next->next;

    Node* headsec = NULL;
    insertNode(headsec, 3);
    Node* head2 = headsec;
    headsec->next = head;
    
    //printing the lists
    cout<<"List1: "; 
    printList(head1);
    cout<<endl;
    cout<<"List2: "; 
    printList(head2);
    cout<<endl;

    //checking if intersection is present
    intersection(head, headsec);
    return 0;
}
