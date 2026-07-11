#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int power(int num, int base){
    if(base == 0){
        return 1;
    }
    return num * power(num, base-1);
}
int main(){
    int ans = power(2,1);
    cout<<ans;
    return 0;
}
//Time complexity : O(logn)
//Space Complexity: O(logn)