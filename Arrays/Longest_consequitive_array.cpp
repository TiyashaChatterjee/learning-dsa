//Brute force: go through each element and do linear search for the next elements, if it isn't searchable go to next element
//TC O(n^2)

//Better Approach
//1. Sort, maxLen, currLen
//2. IF(it is duplicate with the previous one, skip it)
//3. Else if(it's really the one), increase the currLen
// if it isn't then, set count=1, and update the maxLen
//calculate maxLen

//TC for sorting it will take O(nlogn), O(n) space complexity

//Optimal approach:
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Longestarray(vector<int>v){
        int longest=1;
        int n=v.size();
//Using set ds
        unordered_set<int>s;

        for (int i = 0; i < n; i++)
        {
            s.insert(v[i]);
        }

        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int count=1;
                int x = it;
            
                while(s.find(x+1)!=s.end()){
                    x++;
                    count++;
                }
                longest=max(count, longest);
            }
        }
        return longest;
    }
};

