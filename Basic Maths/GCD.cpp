#include<iostream>
using namespace std;
int gcd(int, int, int);
int main(){
    int num1, num2, re;
    cout<<"Enter any two no. ";
    cin>>num1>>num2;
    if(num1>num2){
        gcd(num1, num2, re); 
    }else{
        gcd(num2, num1, re);
    }
return 0;
}

int gcd(int n1, int n2, int r){
    if(n1%n2==0){
        cout<<"The hcf of this is: "<<n2;
    }else{
    while(n1%n2!=0){
        // cout<<"hcf is: "<<n2;
        r = n1%n2;
        n1 = n2;
        n2 =r;
        }
       cout<<"The ultimate GCD is "<<r;
    }
}
   

