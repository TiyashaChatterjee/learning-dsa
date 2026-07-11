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
int length(Node* head){//
    int l = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp -> next;
        l++;
    }
    return l;//T.C : O(N)
}
Node* deletion(Node* head, int n){//n=5
    if(head==NULL && head!= NULL){
        return nullptr;
    }
    int len = length(head);
    if(n>len){
        cout<<"This is INVALID";
        return nullptr;
    }
    if(len == n){
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    Node* temp = head;
    int res = len - n;
    while(temp!=NULL){
        res--;
        if(res==0){
            break;
        }
        temp = temp -> next;
    }
    Node* delete_node = temp->next;
    temp->next = temp -> next -> next;
    delete(delete_node);//we can't delete the temp->next directly, after using it for the end
    return head;
}
void print(Node* head){
    Node* temp = head;
    Node* temp2 = head;
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL){
            cout<<"->";
        }
        temp = temp -> next;
    }
    
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int n;
    cout<<"Enter the position(ex: 3rd from the last): ";
    cin>>n;
    Node* new_head = deletion(head, n);
    print(new_head);
    return 0;
}
//L = length of the linkedlist, N = the required node
//The time complexity of the code: O(L)+O(L-N), res travels L-N number of nodes
//The space complexity of the code: O(1)
    