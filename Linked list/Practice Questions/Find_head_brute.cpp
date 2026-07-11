#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node (int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
// Node* convert2ll(vector<int>&arr){
//     Node* head = new Node arr[0];
//     Node* mover = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node* temp = new Node arr[i];
//         mover -> next = temp;
//         mover = temp;
//     } 
//     return head;
// }
Node* find_head(Node* head){
    unordered_map<Node*, int>mpp;
    Node* temp = head;
    while(temp->next != NULL){
        if(mpp.find(temp)!= mpp.end()){
            cout<<"Loop has founded\n";
            return temp;
        }
    mpp[temp]=1;
    temp = temp -> next;
    }
    cout<<"Loop has not detectable";
}//This has a space complexity O(N), as we are using and Time complexity of O(N)

int main(){
    Node* head = new Node(0);
    Node* second = new Node(1);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);

    head->next = second;
    second -> next = third;
    third->next = fourth;
    fourth -> next = fifth;
    //looping
    fifth->next = third;

    Node* new_head = find_head(head);
    cout<<new_head->data;
    
    return 0;
}