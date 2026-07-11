#include<bits\stdc++.h>
using namespace std;

int main(){
    int n, revnum = 0;
    cout<<"Enter any number: ";
    cin>>n;

    while(n!=0){
        int q = n / 10;
        int r = n%10;
        revnum = revnum * 10 + r;
        n = q;
    }
    cout<<revnum;
    return 0;
}