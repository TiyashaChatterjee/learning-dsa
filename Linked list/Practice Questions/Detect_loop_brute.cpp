#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convert2ll(vector<int> &array){
    Node* head = new Node(array[0]);
    Node* mover = head;
    for (int i = 1; i < array.size(); i++)
    {
        Node* temp = new Node(array[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

int detect(Node* head){
    Node* temp = head;
    map<Node*,int>mpp;
    //We don't need any linear linked list
    while(temp!=NULL){
        //here we are using map, and finding the temp
        if(mpp.find(temp) != mpp.end()){
    //this means, i have searched whole map, but I haven't reach to end founded temp again
            cout<<"The loop is founded";
            return 1;
        }

        //It stores the memory of storing the temp, in my memory
        mpp[temp]=1;
        //updating, temp
        temp = temp -> next;
    }
    cout<<"There is no loop founded";
    return 0;
}

// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }

int main() {
    // Create a sample linked list
    // with a loop for testing
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 
    detect(head);
    // Check if there is a loop 
    // n the linked list
    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
//Time complexity for any map operation is O(logN), in the case of sorted map
//but in unsorted map, O(1)
//There are two map operations: insertion and found operation,so 2 * O(logN)
//N nodes are performing this DSA, then :- N * 2 * O(logN)
//For being usage of the Hash dsa, so, the Space Complexity is O(N)