// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
class tack{
    stack<pair<int,int>>st;
    public:
    void push(int val){//this is a runtime input: as we are defining it during each run
        if(st.empty()){
            st.push({val,val});
        }else{
            st.push({val, min(val, st.top().second)}); //this {} means in pair
        }
    }
    int top(){
        return st.top().first;
    }
    void pop(){
        st.pop();
    }
    int GetMin(){
        return st.top().second;
    }
};
int main(){
    tack s;
    s.push(12);
    s.push(19);
    int result = s.GetMin();
    cout<<result;
    return 0;
}