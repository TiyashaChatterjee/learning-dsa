#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    stack<int>st;
    st.push(5);//{5}
    st.push(9);//{9, 5}
    st.push(10);//{10, 9, 5}
    st.push(2);
    st.emplace(5);//{5, 2, 10, 9, 5}
    st.pop();//it will remove the top part of the stack
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    stack<int>st1, st2;
    st1.swap(st2);
    return 0;
}