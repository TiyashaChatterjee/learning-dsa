#include<iostream>
using namespace std;
int facto(int,int);
int main(){
    int n, F=1;
    cout<<"Enter n: ";
    cin>>n;
    facto(n, F);//5,1
    return 0;
}
int facto(int a, int b){//5,1
    if(a==1){//5
        cout<<b;//
        return b;
    }else{
        return facto((a-1),(b*a));//4,3,2,1; 1*5*4
    }
}