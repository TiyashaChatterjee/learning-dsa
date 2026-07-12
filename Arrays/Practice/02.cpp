#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>&nums) {
        int n = nums.size();
        int count = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }else{
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};

int main(){
    Solution s;
    vector<int>v;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int elements;
    cout<<"Enter the elements: \n";
    for(int i = 0; i<n;i++){
        cin>>elements;
        v.push_back(elements);
    }
    int result = s.findMaxConsecutiveOnes(v);
    cout<<result;
    return 0;
}