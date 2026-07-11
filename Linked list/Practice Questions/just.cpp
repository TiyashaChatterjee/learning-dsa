#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* find_head(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Loop is found\n";
            slow = head;
            if(slow!=fast){
               fast = fast -> next -> next;
                slow = slow -> next;
            }
            return slow;
        }
    }

    cout << "Loop is not found\n";
    return nullptr;
}

int main() {
    Node* head = new Node(0);
    Node* second = new Node(1);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);

    // Linking
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Creating loop
    fifth->next = third;

    Node* new_head = find_head(head);

    if (new_head != nullptr)
        cout << "Meeting point: " << new_head->data << endl;

    return 0;
}
