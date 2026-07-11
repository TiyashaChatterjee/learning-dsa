#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class stack1{
    stack<char>st;
    public:
    int precedence(char ch){
        if(ch == '^'){
            return 3;
        }
        else if(ch == '*' || ch == '/'){
            return 2;
        }
        else if(ch == '+' || ch == '-'){
            return 1;
        }else{
            return -1;
        }
    }
    string reverse_str(string str){
        int i = 0;
        reverse(str.begin(), str.end());
        while(str[i]!='\0'){
            if(str[i]=='('){
                str[i]=')';
            }else if(str[i]==')'){
                str[i]='(';
            }
            i++;
        }
        return str;
    }
    string infix_to_prefix(string str){
        string ans = "";
        int i = 0;
        while (str[i]!='\0')
        {//If it is an operand
            if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
                char ch = str[i];
                ans = ans + str[i];
            }
            
            //opening bracket
            else if(str[i]=='('){
                st.push('(');
            }

            //closing bracket
            else if(str[i] == ')'){
                while((!st.empty()) && (st.top()!='(')){
                    char ch = st.top();
                    st.pop();
                    ans = ans + ch;
                }
                st.pop();
            }
            //Now the Operator
            else{

                //if there is a '^' operator, then precedence will be same like postfix
                  if(str[i] == '^'){
                    while(!st.empty() && precedence(str[i])<=precedence(st.top())){
                        char ch = st.top();
                        ans = ans + ch;
                        st.pop();
                    }
                }

                //if not then it will be special...
                else{
                    while((!st.empty()) && (precedence(str[i]) < precedence(st.top()))){
                        char ch = st.top();
                        ans = ans + ch;
                        st.pop();
                        }
                }
                st.push(str[i]);
                }
                i++;
            }
            while(!st.empty()){
                char ch =  st.top();
                st.pop();
                ans = ans + ch;
            }
            return ans;
        }
    void display(string ans){
        for (int i = 0; i < ans.length(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
        
};

int main() {
    class stack1 s;
    string str = "A+B*(C^D-E)";
    string str1 = s.reverse_str(str);
    string str2 = s.infix_to_prefix(str1);
    string result = s.reverse_str(str2);
    s.display(result);
    return 0;
}