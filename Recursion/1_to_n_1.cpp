#include<iostream>
using namespace std;
int number(int,int);
int main(){
    int n, m=1;
    cout<<"Enter the n: ";
    cin>>n;
    number(n,m);//10, 1
    return 0;
}
int number(int a, int b){//10, 1
    if(b>a){//1>10
        return 0;
    }else{
        cout<<b<<endl;//1
        // b++/;//2
        return (number(a, b+1));//both are giving same results
    }
}
