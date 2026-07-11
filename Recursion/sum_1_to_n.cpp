#include<iostream>
using namespace std;
int param(int,int);
int main(){
    int i, sum = 0;
    cout<<"Enter number u want sum: ";
    cin>>i;
    param(i,sum);
    return 0;
}
int param(int a, int b){
    if(a<1){
        cout<<b;
        return b;
    }else{
        return param(a-1,b+a);
    }
}