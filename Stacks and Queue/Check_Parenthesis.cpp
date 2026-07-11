#include<iostream>
using namespace std;
class stack{
public:
   int top;
   int num;
   char *st;//Dynamical way
   //int st[10];//This is not dynamical
public:
   stack(int n){
    top = -1;
    this->num = n;
    st = new char [n];
   }

void push(int x){
    if(top >= num - 1){
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
bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
void check_parenthesis(string str){
    int i = 0;
    while(str[i]!='\0'){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            push(ch);
            i++;
        }
        else if((st[top] == '(' && str[i] == ')') || (st[top] == '{' && str[i] == '}') || (st[top]=='[' && str[i] == ']')){
             pop(); 
             i++; 
        }
        else {
            return;
        }
    }
    if(isEmpty()){
        cout<<"Balanced";
    }else{
        cout<<"Unbalanced";
    }
}

};

int main(){
    stack st(10);
    string str1 = "[{()}]";
    st.check_parenthesis(str1);
}