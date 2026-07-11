#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> Union(vector<int> arr1, vector<int> arr2){
        int n1 = arr1.size();
        int n2 = arr2.size();

        int i = 0;
        int j = 0;
        vector<int> final;

        while(i<n1 && j<n2){
            int first = arr1[i];
            int second = arr2[j];
            if(first<second){
                if(final.empty()||final.back()!=arr1[i]){
                    final.push_back(arr1[i]);
                }
                i++;
            }else{
                  if(final.empty()||final.back()!=arr2[j]){
                        final.push_back(arr2[j]);
                }
                j++;
            }
        }
        while (i<n1)
        {
            if(final.back()!=arr1[i]){
                final.push_back(arr1[i]);
            }
            i++;
        }
        while (j<n2)
        {
            if(final.back()!=arr2[j]){
                final.push_back(arr2[j]);
            }
            j++;
        }
       return final; 
    }

};


int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,6,7,8,9};
    class Solution s;
    vector<int> final = s.Union(arr1, arr2);

    for (int i = 0; i < final.size(); i++)
    {
        cout<<final[i];
    }
    
    return 0;
}