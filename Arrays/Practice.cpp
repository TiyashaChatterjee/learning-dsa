#include<iostream>
#include<bits\stdc++.h>
#include<map>
using namespace std;

class Union{  
    public:  
    vector<int> Uni(vector<int>&arr1, vector<int>&arr2){
        map<int, int>m;
        vector<int> final;
        
        int n1 = arr1.size();
        int n2 = arr2.size();

        for (int i = 0; i < n1; i++)
        {
            m[arr1[i]]++;
        }
        for (int i = 0; i < n2; i++)
        {
            m[arr2[i]]++;
        }
        
        for(auto p : m){
            final.push_back(p.first);
        }
        return final;
    }
};

int main(){
    class Union s;
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,2,3,4,8,9};
    vector<int> finaly = s.Uni(arr1, arr2);
    for (auto &val : finaly){
        cout << val << " ";
    }
    return 0;

}