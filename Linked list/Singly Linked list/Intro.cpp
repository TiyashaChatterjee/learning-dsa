#include<bits/stdc++.h>
using namespace std;
struct Node
{ 
    public:
    int data;
    struct Node * next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    int arr[]={2, 4, 5, 6};
    Node* y = new Node(arr[0], nullptr);//self_defined_object Pointer_variable_Name = new (keyword) Self_defined_object_name (data, nullptr)
    cout<<y->data;//will print the address of y, which is node, arr[0]
    return 0;
}