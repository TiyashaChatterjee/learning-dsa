#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    int d;
    cout<<"Enter the place upto which you want to do the shifting: ";
    cin>>d;

    // Main function:-
    // 1. reverse upto dth elements
    // 2. reverse upto (n-d)th element 
    // 3. reverser the whole Array

    reverse(A, A+d);
    //reverse(start, end); where the start is inclusive and end is exclusive, means it will include the start but take the element before the end, eliminating the n
    reverse(A+d, A+n);
    reverse(A, A+n);
    //Alternative way...
    //this is also called swapping of array element
    // int temp = A[0];
    // A[0]=A[d];
    // A[d]=temp;

    //traversal
    for (int i = 0; i < n; i++)
    {
            cout<<A[i];
    }
    
    return 0;
}
