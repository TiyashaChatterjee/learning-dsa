#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class solution{
public:
int tapping(vector<int> &arr){
    int n = arr.size();
    int totalscore = 0;

    for(int i=0;i<n;i++){
        int rigmax = 0;
        int lefmax = 0;
        for(int j=0;j<=i;j++){
            if(arr[j]>lefmax){ //here we are comparing the arr[k] with lefmax continously
                lefmax = arr[j];
            }
        }
        for(int k=i;k<n;k++){
            if(arr[k]>rigmax){ //here we are comparing the arr[k] with rightmax continously
                rigmax = arr[k];
            } 
        }
        totalscore = totalscore + min(lefmax, rigmax) - arr[i];
    }
    return totalscore;
}
};
int main(){
    vector<int> arr = {3,0,2,0,4};
    class solution s;
    int result = s.tapping(arr);
    cout<<result<<endl;
    return 0;

}

//T.C: O(n^2) as it takes two loop for one array element
//S.C: O(n) as it takes one array