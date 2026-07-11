#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;//It is storing the value of next node

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
Node* Odd_even(Node* head){
    if(head == NULL || head -> next == NULL){
        cout<<"Invalid!";
        return head;
    }//skipping
    Node* Odd = head;//Odd = 1
    Node* Even = head->next;//Even = 2
    Node* Even_head = Even;//Even_head=2
    while(Even != NULL && Even->next != NULL){//In loop order is must, which one is first we can test
        Odd->next = Even->next;//1->next = 3;3->next = 4.....We already linked Odd->next with Even -> next, so the next line is happening
        Odd = Odd->next;//Odd = 3;Odd = 4
        Even->next = Odd->next;//2->next = 5;5->null
        Even = Even -> next;//Even = 5;Even=null
    }
    Odd -> next = Even_head;
    // Even->next = nullptr;//4->next = 2
    return head;
    //1->3->4->2->5
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(4);
    Node* new_head = Odd_even(head);
    // cout<<new_head->data<<endl;
    print(new_head);
    return 0;
}
//Here I am just traversing the Nodes, so O(N)->T.C
//extra space is taken while creating dummy nodes, so S.C-> O(N)
    