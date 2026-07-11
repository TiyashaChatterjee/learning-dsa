#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class result{
    public:
    vector<int> smaller(vector<int> &arr){
        int n = arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for (int i = (2*n)-1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= arr[i])
            {
                st.pop();//2 popped
            }
            if(!st.empty()){
                ans[i % n] = st.top();//ans[20] = -1,9,9,7,7,6,2,6,6,-1
            }else{
                ans[i % n] = -1;
            }
            st.push(arr[i % n]);//st.push()
        }
        return ans;
    }
};
int main(){
    vector<int> arr = {3,10,4,2,1,2,6,1,7,2,9};
    class result r;
    vector<int>answer = r.smaller(arr);
    for (int i = 0; i < answer.size(); i++)
    {
        cout<<answer[i]<<" ";
    }
    
    return 0;
}