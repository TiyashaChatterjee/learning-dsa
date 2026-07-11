#include<iostream>
using namespace std;
int facto(int);
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"The result of factorial is: "<<facto(n);
    return 0;
}
int facto(int a){
    if(a==0){
        return 1;//you must return 1, if u return 0, result will be 0
    }else{
        return (a*facto(a-1));
    }
}