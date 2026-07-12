#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Find_number(vector<int>&v){
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int num = v[i];
        for (int j = 0; j < n; j++)
        {
            if(num==v[j]){
                count++;
            }
        }
        
        if(count==1){
            return num;
        }
    }
    return -1; 
}
int main(){
    int n;
    cout<<"Enter the number of elements in the vecotor: ";
    cin>>n;
    int element;
    vector<int>v;
    cout<<"Enter the elements in the vector: \n";
    for (int i = 0; i < n; i++)
    {
        cin>>element;
        v.push_back(element);
    }
    int result = Find_number(v);
    cout<<result;
    return 0;
}