#include<iostream>
using namespace std;

int main(){
    int n, revnum = 0;
    cout<<"Enter any number: ";
    cin>>n;
    int dup = n;

    while(n>0){
        int q = n / 10;//56, 5, 0
        int r = n % 10;//2, 6; 5
        revnum = revnum * 10 + r;//0*10+2=2; 2*10+6=26; 265
        n = q;//n=56; 5    
    }
    if(dup == revnum){
        cout<<"It is a Palindrome number.";
    }
    else{
        cout<<"It is not a palindrome number";
    }
    
    return 0;
}