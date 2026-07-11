#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class result{
    public:
    vector<int> smaller(vector<int> &arr){
        int n = arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for (int i = n-1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        return ans;
    }
};
int main(){
    vector<int> arr = {1,3,2,4};
    class result r;
    vector<int>answer = r.smaller(arr);
    for (int i = 0; i < answer.size(); i++)
    {
        cout<<answer[i]<<" ";
    }
    
    return 0;
}