#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    int dup = n;
    
    while(n>0){
        int q = n / 10;
        int r = n % 10;
        sum = sum + r*r*r;//only usefull method for four digits
        n = q;
    }
    // cout<<sum<<endl;
    if(sum==dup){
        cout<<"This is an Armastrong number.";
    }
    else{
        cout<<"This is not an Armstrong number";
    }
    // cout<<dup1;
    return 0;
}