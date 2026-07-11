#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class Search{
    public:
    int missing(vector<int> arr){
        int n = arr.size();

        vector<int> hash(n+1, 0);

        for (int i = 0; i < n-1; i++)
        {
            hash[arr[i]]++;//Counting the frequency
        }
        for (int i = 1; i < n; i++)
        {
            if(hash[i]==0){//To find out the occurance of the number
                return i;
            }
        }
        
    }

};
int main(){
    vector<int>arr = {1,2,3,5,6};
    class Search s;
    int missed = s.missing(arr);
    cout<<"The missing number is: "<<missed;
    return 0;
}