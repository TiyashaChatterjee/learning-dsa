#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = n; i>=1; i--){//when it is decreasing, the inserted loop also connected with it, so it is changing, according to it
        for(int j = 1; j<=i; j++){//5, 4, 3, 2, 1
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}