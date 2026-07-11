#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class MinStack{
    stack<int>st;
    int min = 100;
    
    public:
    void push(int val){
        if(st.empty()){
            st.push(val);//st[10]
            min = val;//min = 10
        }else{
            if(min>val){ // replace min
                st.push(2 * val - min);//Modified value of the val
                min = val;
            }else{
                st.push(val); 
            }
        }
    }
    void pop(){
        if(st.empty()){
            return;
        }
        int x = st.top();
        st.pop();
        if(x<min){ //x is modified value
            min = 2 * min - x;
        }
    }
    int top(){
        if(st.empty()){
            return 0;
        }
        if(min>st.top()){
            return min;
        }
        else{
            return st.top();
        }
    }
    int getMin(){
        return min;
    }
};
int main(){
    MinStack s;
    s.push(10);
    s.push(15);
    s.push(8);
    s.pop();
    int t = s.getMin();
    cout<<t;
    return 0;
}