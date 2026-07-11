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

int find_length(Node* head){
    Node* slow = head;//slow = 0
    Node* fast = head;//fast = 0
    while(fast!= nullptr && fast->next != nullptr){//Fast is moving quickly than the slow pointer, so we had to prioritize this
        slow = slow -> next; 
        fast = fast -> next -> next; 
        //Floyd's Algorithm
        //if fast and slow are intercepting
        if(slow == fast){
            int l = 1;//as we already founded the head, so started counting it
            // cout<<"loop is founded\n";
            //starting the slow from the head
            // slow = head;
            fast = fast -> next;
            while(slow != fast){
                fast = fast -> next;
                //increase the slow and fast by one,until they again not intercepting, and that point is my head of the loop
                // slow = slow -> next;
                l++;
            }
            return l;
        }
        //In the whole process the all pointers are traversing to all elements of the linkedlist, so Time Complexity is O(N)
        //Space com -> O(1)
    }
    cout<<"loop has not founded";
    return 0;
}

int main(){
    Node* head = new Node(0);
    Node* second = new Node(1);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
//LINKING
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
//LOOPING
    fifth->next = third;
    int length = find_length(head);
    cout<<"The length of the loop is: "<<length;
    return 0;
}