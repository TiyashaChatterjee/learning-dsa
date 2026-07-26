#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>Pascal(int numRows){
        int n=numRows;
        vector<int>row(numRows, 1);
        long long val=1;
        row.push_back(val);
        for(int k=1;k<=n;k++){
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
    vector<vector<int>> result = obj.Pascal(n);
    for (auto &row : result) {
        for (auto &val : row) cout << val << " ";
        cout << endl;
    }
}