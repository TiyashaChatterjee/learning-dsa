#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    int count = 0;
    for(int i= 1; i<=n; i++){//time complexity is O(n)
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"It is a prime no.";
    }else{
        cout<<"Not a prime no. ";
    }
    return 0;
}