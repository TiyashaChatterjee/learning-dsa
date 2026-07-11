#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* Odd_even(Node* head) {
    Node* temp = head;

    Node* odd = new Node(-1);   // dummy node for odd
    Node* even = new Node(-2);  // dummy node for even

    Node* Odd_head = odd;
    Node* Even_head = even;

    while (temp != NULL) {
        if (temp->data % 2 == 0) {
            Even_head->next = new Node(temp->data);
            Even_head = Even_head->next;
        } else {
            Odd_head->next = new Node(temp->data);
            Odd_head = Odd_head->next;
        }
        temp = temp->next;
    }

    Even_head->next = odd->next;       // connect even → odd
    Node* new_head = even->next;       // first real node in final list

    delete odd;
    delete even;

    return new_head;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(4);

    Node* new_head = Odd_even(head);
    print(new_head); // should print 2 -> 4 -> 1 -> 5 -> 5

    return 0;
}
