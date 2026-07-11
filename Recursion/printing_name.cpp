#include<iostream>
using namespace std;
int name(int,int);
int main(){
    int n,m=0;
    cout<<"Enter no of times you are printing: ";
    cin>>n;
    name(n,m);
    return 0;
}
int name(int x, int y){
    if(y==x){
        return 0;
    }else{
        cout<<"Tiyasha Chatterjee"<<endl;
        return name(x,y+1);
    }
}