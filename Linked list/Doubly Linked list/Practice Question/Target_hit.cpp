#include<iostream>
#include<vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev; 

    ListNode(int value) : val(value), next(nullptr), prev(nullptr) {}

    ~ListNode() {
        delete next;
    }
};

vector<int> findPairs(ListNode* head, int target) {
    ListNode* temp = head;
    vector<int>v;
    while(temp!= NULL){
        ListNode* mover = head;
        while(mover!=NULL){
        if(target-temp->val==mover->val){
            // ListNode* head1 = new ListNode(temp->val);
            
            v.push_back(temp->val);
            v.push_back(mover->val);
            
        }
        mover=mover->next;
    } 
    temp = temp -> next;
}

return v; 

}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(5);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(4);
    int t = 6;
    vector<int>new_head = findPairs(head, t);
    for(int x:new_head){
        cout<<x<<" ";
    }
    return 0;
}