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
//timer method//
int find_length(Node* head){
    unordered_map<Node*, int>mpp;
    int timer = 0;
    Node* temp = head;
    while(temp!=NULL){
        if(mpp.find(temp) != mpp.end()){
            int value = mpp[temp];//just because map dsa, we kind of recall the value at temp index in map
            int l = timer - value;//deleting the value stored in map at [temp], (temp:revisited) from the length before loop is founded
            return l; 
        }
        mpp[temp]=timer;//mpp[1]=1
        temp= temp->next;//temp = 1
        timer++;//After traversing, we get the value of the timer as the length before loop is founded
    }
    cout<<"Not a loop\n";
    return 0;
}//This has a space complexity O(N), as we are using mapp and Time complexity of O(N)

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second -> next = third;
    third->next = fourth;
    fourth -> next = fifth;
    //looping
    fifth->next = third;

    int length = find_length(head);
    cout<<length;
    
    return 0;
}