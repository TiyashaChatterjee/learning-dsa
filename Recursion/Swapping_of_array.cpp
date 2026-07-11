#include<bits/stdc++.h>
using namespace std;
int f(int a,int b,int c[]);
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    f(0,n,a);
    for(int j=0;j<n;j++){
        cout<<a[j];
    }
    return 0;
}
int f(int a, int b, int c[]){
    if(a>=b){
        return 0;
    }else{
        swap(c[a],c[b]);
        return f(a+1,b-1,c);
    }
}