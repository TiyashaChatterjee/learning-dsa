#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n, sum = 0, dup1;
    cout<<"n: ";
    cin>>n;
    int dup = n;
    int digit = log10(n)+1;

    while(n>0){
        // sum = 0;
        int q = n / 10;
        int r = n % 10;
        sum = sum + pow(r,digit);
        n = q;
        // cout<<sum<<endl;
    }
    // cout<<sum;//it is printing not initialized value
    if(dup == sum){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}