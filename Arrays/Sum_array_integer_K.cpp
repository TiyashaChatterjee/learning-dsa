#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find(vector<int> &arr, int k){
    int n = arr.size();
    int sum = 0;
    int maxi = 0;
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if(sum==k){
                len = j-i+1;
            }

            maxi=max(maxi,len);
        }
        
    }
    return maxi; 
}
int main(){
    int n, k;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the sum: ";
    cin>>k;
    vector<int>v(n);
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<Find(v,k);
    return 0;
}

//Time complexity : O(n^2)
//Space complexity: O(1)