#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void go_zeros_last(int n, vector<int>a){
    unordered_map<int, int>m;//creating a empty map
    vector<int>b;//empty vector

    for (int i = 0; i < n; i++)//ntimes
    {
        if(a[i]==0){
            m[0]++;//count the frequency
        }else{
            b.push_back(a[i]);
        }
    }
    int c = m[0];
    for (int i = 0; i < c; i++)//n times
    {
        b.push_back(0);
    }
    for (int i = 0; i < b.size(); i++)//n times
    {
        cout<<b[i];
    }
}
int main(){
    vector<int>a; 
    a.push_back(2);
    a.push_back(7);
    a.push_back(0);
    a.push_back(5);
    a.push_back(0);
    cout<<"Original array:" <<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    cout<<"After sorting: "<<endl;
    go_zeros_last(5, a);
    return 0;
}//time complexity: O(3n)
//space complexity: O(n)
//Then the things are getting complicated then the things are getting a very important role of the first waiting 