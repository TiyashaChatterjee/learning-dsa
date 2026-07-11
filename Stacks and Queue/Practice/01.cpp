#include<iostream>
#include<bits\stdc++.h>
using namespace std;

vector<int> smaller(int arr[], int n){
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int F = arr[i];
        int j = i + 1;
        bool found = false;
        while (j<n)
        {
            if(arr[j]<F){
                found = true;
                v.push_back(arr[j]);
                break;
            }
            j++;
        }
        if(!found){
            v.push_back(-1);
        }
    }
    return v; 
}
int main(){
    int n = 5;
    int arr[n]= {1, 25, 8, 7, 10};
    vector<int> new1 = smaller(arr, n);
    for (int i = 0; i < new1.size(); i++)
    {
        cout<<new1[i]<<" ";
    }
    return 0;
}