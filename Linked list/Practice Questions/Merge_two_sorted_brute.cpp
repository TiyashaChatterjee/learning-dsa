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
    // sort(arr3.begin(), arr3.end());
    Node* head = convert2ll(arr3);
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    vector<int>arr1={1, 2, 3, 5};
    vector<int>arr2={1, 3, 4, 6};
    Node* head1 = convert2ll(arr1);
    Node* head2 = convert2ll(arr2);
    vector<int> arr3 = merge(head1, head2);
    Node* head3 = convert2ll(arr3);
    print(head3);
    return 0;
}