#include<bits\stdc++.h>
using namespace std;
void insert(stack<int> &s, int temp){
    if(s.empty()|| s.top()<=temp){
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();

    insert(s, temp);
    s.push(val);
}
void sortStack(stack<int>&s){
    if(!s.empty()){
        int temp = s.top();
        s.pop();
        sortStack(s);
        insert(s, temp);
    }
}
int main(){
    stack<int> s;
    s.push(4);
    s.push(1);
    s.push(3);
    s.push(2);

    sortStack(s);
    cout<<"The sorted stack is: "<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}

//Time complexity O(n^2), as in worst case, 
//1. sortStack pops each element from the stack->n calls
//2. insert performs set of comparisons for each pop, During the worst case where the temp is the smallest element, this comparison becomes n

//There is no Optimization possible: as it's using stack, there is no random access is possible, instead of the top element
