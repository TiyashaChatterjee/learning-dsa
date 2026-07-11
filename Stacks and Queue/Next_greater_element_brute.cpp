#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class stack1{
    stack<int>st;
    vector<int> emp;
    public:
    vector<int> next_greater(vector<int>arr1){
        for (int i = 0; i < arr1.size(); i++)
        {
            if(st.empty()){
                st.push(arr1[i]);
                emp.push_back(-1);
            }
            else if(st.top()<arr1[i]){
                while((!st.empty())&&(arr1[i]>st.top()))
                {
                    st.pop();
                    if(arr[i]<st.top()){
                        emp.push_back(st.top());
                        st.push(arr1[i]);
                    }
                }
                
            }else{
                emp.push_back(-1);
                st.push(arr1[i]);
            }
        }
        return emp;
        
    }
    
};

int main(){
    class stack1 s;
    vector<int> arr = {5,3,12,4,6,9,1,2};
    vector<int>result = s.next_greater(arr);
    for (int i = 0; i <result.size() ; i++)
    {
        cout<<result[i];
    }
    
    return 0;
}