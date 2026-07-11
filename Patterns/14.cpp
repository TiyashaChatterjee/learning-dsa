#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<=5; i++){
        char ch = 'A';//if there is A in every line, then u should consider in the line
        for(int j = 1; j<=i; j++){
            cout<<ch<<" ";
            ch=ch+1;
    }
    cout<<endl;
    }
    return 0;
}