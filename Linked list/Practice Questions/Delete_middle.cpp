

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
}//It is not a optimal way to do, because it takes O(n) space in itself
Node* Midnode(Node* head){
    Node* fast = head;
    Node* slow = head;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}
void print(Node* head){
   Node* temp = head;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
        temp = temp -> next;
   }

}
Node* Middelete(Node* slow, Node* head){
    // cout<<head->data;
    if(head == NULL || head -> next == NULL){
        delete head;
        cout<<"This is INVALID";
        return NULL;
    }
    Node* temp = head;
    Node* prev = NULL;
    // cout<<temp->data;
    while(temp->data != slow -> data){
        prev = temp;
        temp = temp -> next;
    }
    cout<<"The mid node is: "<<prev->data<<endl;
    prev->next = prev -> next -> next;
    return head;
}
int main(){
    
    Node* head = new Node (1);
    head->next = new Node (3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(8);
    head->next->next->next->next=new Node(9);

    Node* temp = Midnode(head);
    Node* newhead = Middelete(temp, head);
    print(newhead);
    return 0;
}
//The time complexity is O(n) 
//Space complexity is O(1)