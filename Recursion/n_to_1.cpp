#include<iostream>
using namespace std;
int number(int);
int main(){
    int n;
    cout<<"Enter upto which it is printing: ";
    cin>>n;
    number(n);
    return 0;
}
int number(int x){
    int y = 1;
    if(x<y){
        return 0;
    }else{
        cout<<x<<endl;
        return number(x-1);
    }
}