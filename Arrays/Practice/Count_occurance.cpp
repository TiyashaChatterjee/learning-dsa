#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int counting(int *arr, int n){
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if(arr[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        maxi = max(maxi, cnt);
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;//6 
    int arr[n];//{1,1,1,3,2,2}
    cout<<"Enter the elements in the array: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result = counting(arr,n); 
    cout<<result;
    return 0;
}