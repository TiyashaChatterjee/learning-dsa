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
//
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
void printList(Node* head){
    Node* temp = head;//temp = 1
    while(temp!=NULL){
         if(temp->next==NULL){
            cout<<temp->data;
            return;
        }
        cout<<temp->data;//print 1; 7; 9
        cout<<"->";//print 1->7->9
       
        temp = temp->next;//temp = 7; 9; 0
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
Node* addition(Node* head){
    Node* temp = head;
    //converting ll data to numbers
    int d, n = 0, r, q;
    while(temp!= NULL){
        d = temp->data;//9->9->null
        n = n*10+d;
        temp = temp -> next;//n = 99
    }//O(n)
    //adding one
    int res = n+1;//100//space complexity: O(1)
    //converting numbers to digit
    head = nullptr;//for creating a new linked list(head)...we have to upgrade the head as nullptr
    string s = to_string(res);//convert to string//space complexity: O(n)
    for(char c:s){
        insertNode(head, c -'0');//start inserting in the linked list, where c - "0", points to the integer value like 1 after converting
    }//space complexity: O(n)
    // cout<<head->data;
    return head;
} 


int main(){
    Node* head = NULL;
    insertNode(head,178); 
    insertNode(head, 9);
    // cout<<head->data;
    Node* new_head = addition(head);
    printList(new_head);
    return 0;
}
//time complexity is O(3n)==O(n)
//space complexity is O(2n)+O(1) = O(n)///This is a brute approach
