#include<bits\stdc++.h>
using namespace std;
void insert(stack<int> &s, int temp){
    while(s.empty()||s.top()<=temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}
//here the stack is the main character, so we should use the original one  
void sortStack(stack<int> &s){
    if(!s.empty()){
        int temp = s.top();
        s.pop();
        sortStack(s);
        insert(s, temp);
    }
}
int main(){
    stack<int>s;
    s.push(4);
    s.push(84);
    s.push(80);
    s.push(74);
    s.push(70);
    sortStack(s);
    cout<<"The Sorted stack is: "<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}