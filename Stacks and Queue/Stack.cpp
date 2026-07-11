#include<iostream>
using namespace std;
class stack{
public:
   int top;
   int num;
   int *st;//Dynamical way
   //int st[10];//This is not dynamical
public:
   stack(int n){
    top = -1;
    this->num = n;
    st = new int [n];
   }

void push(int x){
    if(top >= 10){
        return;
    }
    top = top + 1;
    st[top]=x;
}

int find_top(){
    if(top==-1){
        cout<<"There is no elements in the stack";
        return -1;
    }
    return st[top];
}

void pop(){
    if(top==-1){
        cout<<"There is no elements in the stack";
        return;
    }
    top = top - 1;
}

int size(){
    return (top+1);
   }
};

int main(){
    stack st(10);
    st.push(5);
    st.push(7);
    st.push(10);
    // st.pop();
    int t = st.find_top();
    int s = st.size();
    cout<<s<<endl;
    cout<<t;
    return 0;
}