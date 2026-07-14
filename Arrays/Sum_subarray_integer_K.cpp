#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find(vector<int>v, int k){
    int n = v.size();
    int l = 0;
    int r = 0;
    int sum = v[0];
    int maxi = 0;
    int len;
      
    while(r<n){
        while(l<=r && sum>k){
            sum = sum - v[l];
            l++;
        }
        if(sum==k){
            len = r-l+1;
            maxi = max(maxi, len);
        }

        r++;
        if(r<n){
            sum += v[r];
        }
    }

    return maxi;
}
int main(){
    int k,n; 
    cout<<"Enter the number K: ";
    cin>>k;

    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int>v(n);

    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<Find(v,k);

    return 0;
}

//Sliding Window requires a monotonic property.
//So it will only be used for positvie numbers