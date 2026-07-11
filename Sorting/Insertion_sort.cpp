#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cout<<"Enter the array size: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: ";
    for(int c=0; c<n; c++){
        cin>>A[c];
    }
//Insertion sorting
    for(int i=0; i<n; i++){
        min = A[i];
        if(A[i] > A[i+1]){
            swap(A[i],A[i+1]);
            min = A[i+1];
        }
    }
    for(int p=0; p<n; p++){
        cout<<A[p];
    }
    return 0;
}