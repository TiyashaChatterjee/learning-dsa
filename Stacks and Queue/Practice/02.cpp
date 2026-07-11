#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class result{
    public:
    vector<int>smaller(vector<int>arr){
        int n = arr.size();
        stack<int>s;
        vector<int>answer(n,-1);
        for (int i = n-1; i>= 0 ; i--)
        {
            while(!s.empty() && arr[i]<s.top()){
                s.pop();
            }
            if(!s.empty()){
                answer[i]=s.top();
            }
            s.push(arr[i]);
        }
        return answer;
    }
};
int main(){
    class result r;
    vector<int>arr = {1,3,2,4};
    vector<int>answer = r.smaller(arr);
    for (int i = 0; i < answer.size(); i++)
    {
        cout<<answer[i]<<" ";
    }
    
    return 0;
}