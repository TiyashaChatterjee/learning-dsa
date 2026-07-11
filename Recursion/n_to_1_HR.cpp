#include<iostream>
using namespace std;
int number(int,int);
int main(){
    int n, m=1;
    cout<<"Enter n: ";
    cin>>n;
    number(n,m);
    return 0;
}
int number(int a, int b){//this series should go; 1, 2, 3, ...n
    //but as it is a head recursion, it will go; n...., 3, 2 , 1
    if(b>a){
        return 0;
    }else{
        // b++;//here b++ will not excecute, it will generate the wrong value of b
        number(a, b+1);
        cout<<b<<endl;
    }//This is called head recursion, it will go reverse
}