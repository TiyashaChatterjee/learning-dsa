#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class stack1{
    stack<char>st;
    public:
    int precedence(char str){
        int i = 0;//i = 0
        if(str  == '^'){
            return 3;
        }else if(str =='*' || str  =='/'){
            return 2;
        }else if(str =='+'||str =='-'){
            return 1;
        }else{
            return -1;
        }
    }

    void in_to_post(string str){
        int i = 0;// i = 0, 1
        string ans = "";//ans = ""

        
        while(str[i]!='\0'){
            
            
            if((str[i]>='A'&& str[i]<='Z') || (str[i]>='a' && str[i] <= 'z')){
                ans = ans + str[i];//
            }


            else if(str[i]=='('){
                st.push('(');
            }
            
            else if(str[i] == ')'){
                while(st.top()!='('){
                    ans = ans + st.top();
                    st.pop();
                }
                st.pop();
            }else{//operator
                char ch = str[i];
                while((!st.empty()) && (st.top() != '(') && (precedence(str[i]) <= precedence(st.top()))){
                    char x = st.top();
                    st.pop();
                    ans = ans + x;
                    }
                    st.push(ch);
                }
            i++;
        }
            while(!st.empty()){
                char x = st.top();
                st.pop();
                ans = ans + x;
            }
            cout<<ans;
        }
    };
int main(){
    class stack1 s;
    string str= "a*b/c*(d+e)";
    s.in_to_post(str);
    return 0;
}