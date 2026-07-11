#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> smaller(int arr[], int n){
    vector<int> v;
    for(int i = 0; i<n; i++){
        bool found = false;// why here? : each and every element's starting found is false
        int F  = arr[i];
        int j = i+1;
        while (j<n){
            if(F>arr[j])
            {
                v.push_back(arr[j]);
                found = true;
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
    int arr[n] = {4,8,5,2,25};
    vector<int> ne = smaller(arr, n);
    for (int i = 0; i < ne.size(); i++)
    {
        cout<<ne[i]<<" ";
    }
    return 0;
}