#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int sum_of_mini(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int mini = arr[i];
        for (int j = 0; j < n; j++)
        {
            mini = min(min, arr[j]);
            sum += mini;
        }
        
    }
    return sum;
    
}
int main(){
    int main()
    return 0;

}