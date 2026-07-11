#include<iostream>
using namespace std;
int number(int, int);
int main(){
    int n,m;
    cout<<"Enter n and m: ";
    cin>>n>>m;
    number(n,m);
    return 0;
}
int number(int a, int b){//5 3
    // int i = 1;
    if(b>a){//3>5!=
        return 0;
    }else{
        // b++;
        number(a-1,b);//3,4,5
        cout<<a<<endl;
    }
}