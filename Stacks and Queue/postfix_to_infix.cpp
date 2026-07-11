#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class stack2{
    stack<string>st;
    public:
    void post_to_in (string str){
        int i = 0;// i = 0, 1, 2, 3, 4, 5, 6
        while (str[i]!='\0')
        {
            if(str[i]>='A' && str[i]<='Z'){
                 //ch = A, B, D, E, F
                st.push(string(1, str[i]));//st[(A-B), (D+E), F]
            }else{
                string op(1,str[i]); //op = '-', '+', '*'
                string ch1 = st.top(); // ch1 = F
                st.pop();// popped B, E, F
                string ch2 = st.top();//ch2 = D, (D+E)
                st.pop();
          //st[(A-B), (D+E), ]
                string result = "(" + ch2 + op + ch1 + ")";
                st.push(result);
            }
            i++;
        }
    }
void display() {   // pass by value → copy
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
// any time you pass a string never use, ' ' instead of " "
//for stack instead of pushing character one by one use string
//to convert character to string: use string(1, ch)...(one for quantity)
//Never use, " " to cover the string
};
int main(){
    class stack2 s;
    string str = "AB-DE+F*/";
    s.post_to_in(str);
    s.display();
    return 0;
}