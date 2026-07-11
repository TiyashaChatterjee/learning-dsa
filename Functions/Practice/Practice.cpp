#include<iostream>
using namespace std;

void multi(int num1, int num2){//Here, u have to put the same variables like in main
    int m = num1 * num2;
    cout<<"The result is a: "<<m;
    // cout<<m;
    
}

int main(){
    int num1, num2;
    cin>>num1;
    cout<<endl;
    cin>>num2;
    multi(num1, num2);
    // cout<<"The multiplication is: "<<multi(num1, num2);
    return 0;
}