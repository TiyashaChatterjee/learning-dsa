#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    //Array inputation
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: "<<endl;
    for (int j = 0; j < n; j++)
    {
        cin>>A[j];
    }
   //hashing 
    int hash[10]={0};
    for (int i = 0; i < n; i++)
    {
        hash[A[i] % 10]++;//for counting the numbers u have to use the formula
    }
    //fetching the data
    cout<<"Enter the number of qustion u want to ask: ";
    cin>>q;
    while(q--){//same as q<0
        int x;
        cout<<"Enter the number u wanna count: ";
        cin>>x;
        cout<<"The number of "<<x<<" is: "<<hash[x%10]<<endl;
    }
    return 0;
}
