#include<iostream>
using namespace std;

void value(int a){
    a += 1;
    cout<<a<<endl;
}
void reference(int &b){
    b += 2;
    cout<<b<<endl;
}
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    value(a);
    reference(b);

    cout<<"This is the result of a: "<<a<<endl;//It will print the main's input of a
    
    cout<<"This is the result of b: "<<b<<endl;//It will print the changed output by reference function, becz, here is &

    return 0;
}