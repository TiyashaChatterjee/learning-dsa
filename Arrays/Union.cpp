#include<iostream>
#include <bits\stdc++.h>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>&nums1, vector<int>&nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<int> Union;
        map<int, int> m;
        for (int i = 0; i < n1; i++)
        {
            m[nums1[i]]++;
        }
         for (int j = 0; j < n2; j++)
        {
            m[nums2[j]]++;
        }
//here the complexity is: O(m+n)log(m+n)
//Distinct element selection
        for (auto p : m)
        {
            Union.push_back(p.first);
        }
        
        return Union;
        
    }
};

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,2,3,4,8,9};
    Solution s;
    vector<int> final = s.unionArray(arr1, arr2);
    for (auto &val : final){
        cout << val << " ";
    }
    return 0;
}