#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack{
        stack<int>s1;
        stack<int>s2;
        int size = s1.size();
        public:
        void push(int x){
            s1.push(x);
        }
        int top(){
            return s1.top();
        }
        void pop(){
            if(s1.empty()&&s2.empty()){
                cout<<"The Stack is empty";
                return;
            }
        if(s2.empty()){
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
            s2.pop();
            
        }
        void display(){ 
            while(!s2.empty()){
                cout<<s2.top()<<" ";
                s2.pop();
            }
            while(!s1.empty()){
                cout<<s1.top();
                s1.pop();
        }
        }
    };
int main(){
    class Stack s;
    s.push(5);
    s.push(1);
    s.push(0);
    s.pop();
    s.push(7);
    s.display();
    return 0;
}