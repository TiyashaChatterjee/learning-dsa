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

Node* detect(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=nullptr && fast -> next = nullptr){//eitherf both are true...
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            cout<<"Truely! there have a loop"<<endl;
            return slow;
        }
    }
    cout<<"Nope! there is no loop"<<endl;
    return nullptr;//we should return nullptr, for a loop, which is, returning nothing, but return type is not void
}
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = third; 
    
    Node* loophead = detect(head);
    cout<<loophead->data;
    
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
//Here I am just traversing the Nodes, so O(N)T.C
//No extra space is taken, so S.C O(1)
    