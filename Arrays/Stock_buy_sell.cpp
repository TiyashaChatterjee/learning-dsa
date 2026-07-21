//Brute Force Approach: O(n)
//Using two for loops

//Optimal solution
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Stock(vector<int>price){
        int n = prices.size();
        // int maxx=0;
        int profit = 0;
        int maxi=0;
        int min = prices[0];
        for (int i = 0; i < n; i++)
        {
            if(min>prices[i]){
                min=prices[i];
            }
            profit = prices[i]-min;
            maxi= max(maxi, profit);
        } 
        return maxi;
    }
};