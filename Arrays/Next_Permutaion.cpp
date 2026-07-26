#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>Next(vector<int>&nums){
        int n=nums.size();
        int pivot=-1;
        for (int i = 0; i < n; i++)
        {
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
            if(pivot==-1){
                reverse(nums.begin(), nums.end());
            }
            swap(nums[pivot], nums[n-1]);
        
        return {-1,-1};
    }
};

int main(){
    class Solution s;
    vector<int>v={1,2,3,6,5,4};
    vector<int>ans=s.Next(v);

    int n=ans.size();
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i];
    }
    return 0;
}
