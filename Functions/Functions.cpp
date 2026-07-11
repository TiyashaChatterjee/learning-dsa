#include<iostream>
using namespace std;
void Printname(string name){
    cout<<"Hey "<<name<<endl;
}

void Unparameterised(){
    cout<<"Hey I am a unparameterised function";
}

int main(){
    string name;
    cout<<"Enter any name: ";//It is called parameterised function
    cin>>name;
    Printname(name);
    Unparameterised();
    return 0;
}