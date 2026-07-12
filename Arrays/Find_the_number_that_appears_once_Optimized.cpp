//XOR (^) is the operator, that used to cancel the pairs from a group of data.
// 1. For n ^ n: 0
// 2. For n ^ 0 : n

//problem name: find the numbers that appears once, instead of data which appears twice.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Finding(int arr[], int n){
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr = (xorr ^ arr[i]);
    }
    return xorr;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int res = Finding(arr, n);
    cout<<res;
    return 0;
}

//Time complexity: O(n), as using single loop
//Space complexity: O(1), as using single array
