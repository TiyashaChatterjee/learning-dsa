#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>Pascal(int numRows){
        int n=numRows;
        vector<int>row;
        long long val=1;
        row.push_back(val);
        for(int k=1;k<n;k++){
            val=val*(n-k)/k;

            row.push_back(val);
        }
        return row;
    }
};

int main() {
    class Solution obj;
    int n = 5;

    // Generate and print Pascal's Triangle
    vector<int> result = obj.Pascal(n);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}