#include<iostream>
using namespace std;
int f(int);
int main(){
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    cout<<"The summation will be: "<<f(number);
    return 0;
}
int f(int a){
    if(a==0){
        return 0;//
    }else
        return a+f(a-1);//here I am returning this to main function
}