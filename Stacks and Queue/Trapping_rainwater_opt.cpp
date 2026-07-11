
#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int trapped(vector<int>&arr){
    int n = arr.size();
    int totalwater = 0;
    int left = 0;
    int right = n-1;
    int leftmax  = arr[left];//leftmax = 3
    int water = 0;
    while(left<right){
        if(arr[left]>=arr[right]){// if left element is greater than or equal right element
            leftmax = arr[right];//leftmax = arr[right]
        }
        water = leftmax - arr[left];
        left++;
        totalwater += water;
    }
    return totalwater;
}
int main(){
    vector<int>arr = {3,0,2,0,1};
    int result = trapped(arr);
    cout<<result;
    return 0;
}
//FAILED