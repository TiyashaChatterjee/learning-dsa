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
Node* reversed(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* newHead = reversed(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    
    return newHead;
}
void middle(Node* head){
    //check if it have one node or 0 node
    if(head == NULL || head -> next == NULL)
    //In any while loop, when a parameter mentioned in the condition has no existence inside the loop, then this will cause error
    {
        cout<<"True!! it is Palindrom";
    }
    //Finding the middle
        Node* slow = head;
        Node* fast = head;
        while(fast->next != NULL && fast->next->next != NULL)//for even no. middle one is fast -> next -> next and for odd fast -> next
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        Node* newhead = reversed(slow->next);
        //Checking
        Node* first = head;
        Node* second = newhead;
        while(second!=NULL){

            if(second->data!=first->data){
                cout<<"This is not a Palindrom"<<endl;
                return;//we can put return void in a if statement
            }
            second = second -> next;
            first = first -> next;
        }
        reversed(newhead);
        cout<<"This is Palindrom";
}  
int main(){
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(4);
    middle(head);
    
    return 0;
}
//Here I am just traversing the Nodes, so O(N)T.C
//No extra space is taken, so S.C O(1)
    