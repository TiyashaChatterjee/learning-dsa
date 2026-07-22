#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[n-1];

        vector<int>ans;

        if(nums.empty()){
            return ans;
        }
        ans.push_back(maxi);
        for(int i=n-2;i>=0;i--){
            if(maxi<nums[i]){
                maxi=nums[i];
                ans.push_back(maxi);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main(){
    class Solution v;
    vector<int>vec={5,2,6,4,3};
    vector<int>ans=v.leaders(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<ans[i];
    }
    return 0;
}