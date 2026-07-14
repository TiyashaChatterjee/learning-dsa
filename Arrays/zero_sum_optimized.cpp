#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Find(vector<int>v){
    unordered_map<int, int>mpp;
    //It will be storing the value and their first occurrence
    int maxi = 0;
    int sum = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        sum += v[i];

        if(sum==0){
            maxi = i+1;
        }else{
            if(mpp.find(sum)!=mpp.end()){
                maxi = max(maxi, i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> v = {9, -3, 3, -1, 6, -5};
    cout << Find(v);
    return 0;
}