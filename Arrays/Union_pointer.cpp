#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> Union(vector<int>arr1, vector<int>arr2){
       int n1 = arr1.size();//n1= 5
       int n2 = arr2.size();// n2 = 5
       
       int i= 0, j = 0;
       
       vector<int> final;
       
       while(i<n1 && j<n2){
            int first = arr1[i];// first = 1, 2, 3, 4, 6
            int second = arr2[j];//second = 1, 2, 8
            if(first<second){
                if(final.size()==0 || final.back()!=first){
                    final.push_back(arr1[i]);//final = [1, 2, 3, 4, 6]
                }
                i++;// i = 5, j = 3
        }else if(first>second){
                if(final.size()==0 || final.back()!=second){
                    final.push_back(arr2[j]);
                }
                j++;
        }else{
                if(final.empty() || final.back() != arr1[i]){
                    final.push_back(arr1[i]);//final = [1, 2]
                }
                i++;// i = 1, 2, 3
                j++;// j = 1, 2, 3
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
       if(final.back()!=arr1[j]){
            final.push_back(arr1[j]);
       } 
       j++;
    }
    
    return final;
}
};

int main(){
    vector<int> arr1 = {1,2,3,4,6};
    vector<int> arr2 = {1,2,5,6, 8};
    class Solution s;
    vector<int> final = s.Union(arr1, arr2);

    for (int i = 0; i < final.size(); i++)
    {
        cout<<final[i];
    }
    
    return 0;
}