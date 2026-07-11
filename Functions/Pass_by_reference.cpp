#include<iostream>
using namespace std;

void done(int &a){
    a +=5;
    cout<<a<<endl;//10
    a+=5;
    cout<<a<<endl;//15
}
int main(){
    int a;//5
    cout<<"enter a: ";
    cin>>a;
    done(a);
    cout<<a<<endl;//bcz, I gave the address of the variable of main, to the function done, so it will print the changed done by the another function

    return 0;
}