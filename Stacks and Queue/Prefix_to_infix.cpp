#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class stack1{
    stack<string>st;
    public:
    void pre_to_infix(string str){
        int n = str.length();
        for(int i = n-1; i >= 0; i--){//Here the scanning will happen from right to left side
            

            if(str[i]>='A' && str[i]<= 'Z'){
                st.push(string(1, str[i]));
            }
            
            else{
                string str1 = st.top();
                st.pop();
                string str2 = st.top();
                st.pop();
                string op = (string(1, str[i]));
                string result = "("+ str1 + op + str2 + ")";
                st.push(result);
            }
        }
    }
   
    void display(){
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
   }
};
int main(){
    class stack1 s;
    string str = "*+PQ-MN";
    s.pre_to_infix(str);
    s.display();
    return 0;
}