#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class stack1{
    stack<string>st;
    public:
    string pre_to_post(string str){
        int n = str.length();
        for (int i = n-1; i >= 0; i--)
        {
            if(str[i]>='A' && str[i]<='Z'){
                st.push(string(1, str[i]));
            }else{
                string op = string(1, str[i]);
                string top1 = st.top();
                st.pop();
                string top2 = st.top();
                st.pop();
                string result = top1 + top2 + op;
                st.push(result);
            }
        }
        return st.top(); 
    }
};
int main(){
    class stack1 s;
    string str = "/-AB*+DEF";
    string result = s.pre_to_post(str);
    cout<<"The Final expression would be: \n";
    cout<<result;
    return 0;
}