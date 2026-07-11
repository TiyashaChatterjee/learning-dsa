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
    Node* fast = head->next;//Just to ensure, the correct ans, means for even 1st middle node and for odd it will as it is
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
Node* merge(Node* head1, Node* head2){
    Node* mover1=head1;
    Node* mover2 = head2;
    vector<int>arr3;
    while (mover1!=NULL)
    {
        arr3.push_back(mover1->data);
        mover1 = mover1 ->next;
    }
    while(mover2 != NULL){
        arr3.push_back(mover2 -> data);
        mover2 = mover2 -> next;
    }
    sort(arr3.begin(), arr3.end());
    Node* head = convert2ll(arr3);
    return head;
}
Node* ms1(Node* head){
    Node* temp = head;
    //Base case
    if(temp== NULL || temp->next ==NULL){
        return head;
    }
    Node* mid = Midnode(head);
    //splitting or dividing
    Node* lefthead = head;//Defining two heads of the Linked List
    Node* righthead = mid->next;
    mid->next = nullptr;

    lefthead = ms1(lefthead);//getting unsorted into sorted manner
    righthead = ms1(righthead);//getting unsorted into sorted manner
    //merging of two sorted linked list
    return merge(lefthead, righthead);
}
int main(){
    
    Node* head = new Node (1);
    head->next = new Node (0);
    head->next->next = new Node(2);
    head->next->next->next = new Node(0);
    head->next->next->next->next=new Node(1);

    Node* new_head = ms1(head);
    print(new_head);
    return 0;
}
//The time complexity is O(n) 
//Space complexity is O(1)