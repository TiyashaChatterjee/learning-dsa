#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){//printing the rows
        for(int j = 1; j<=i; j++){
            cout<<j;//if i, then it will be same for one row
        }
        cout<<endl;
    }


    return 0;
}