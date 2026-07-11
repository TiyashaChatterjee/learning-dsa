#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        for(int s1 = 1; s1<=4-i+1; s1++){
            cout<<" ";
        }
        for(int s1 = 1; s1<=4-i+1; s1++){
            cout<<" ";
        }
        for(int k = 1; k<= i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int s = 1; s<= 10; s++){
        cout<<"*";
    }
    cout<<endl;
    //2nd part...
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4-i+1; j++){
            cout<<"*";
        }
        for(int k=1; k<=i; k++){
            cout<<" ";
        }
        for(int l=1; l<=i; l++){
            cout<<" ";
        }
        for(int m=1; m<=4-i+1; m++){
            cout<<"*";
        }
      cout<<endl;  
    }
    return 0;
}