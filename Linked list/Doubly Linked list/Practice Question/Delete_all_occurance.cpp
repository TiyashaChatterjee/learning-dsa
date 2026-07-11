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
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node (arr[i], nullptr, prev);//this line adds the new member, in between the null and previous, where prev is continously upgrading itself
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* remove_dll(Node* head, int k){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==k){//if k is matching with temp
            if(head==temp){//is it a head
                head = temp -> next;//update the head
            }
            Node* next_node = temp->next;//set next_node and prev_node 
            Node* prev_node = temp->back;
            if(next_node){//it's head!
                next_node->back = prev_node;//then unlink the head
            }
            if(prev_node){//it's tail
                prev_node->next=next_node;//then unlink the tail
            }
            delete(temp);
            temp=next_node;//after all we are doing all the stuff using temp..so 
        }else{
            temp=temp->next;
        }
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
int main(){
    vector<int>arr={1, 2, 3, 8, 1};
    Node* head = convert(arr);
    int k;
    cout<<"The key here is: ";
    cin>>k;
    Node* new_head = remove_dll(head, k);
    print(new_head);
    return 0;
}