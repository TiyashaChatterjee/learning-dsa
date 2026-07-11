#include<iostream>
using namespace std;

void dosomething(string a){
    a = "I am coder;";
    cout<<a<<endl;
}
int main(){
    string a = "I am a runner";
    dosomething(a);//I am a coder
    cout<<a<<endl;//It will print 10, because it is not included, in the dosomething function, it's only a copy of it
//so it will print -> I am a runner

    return 0;
}