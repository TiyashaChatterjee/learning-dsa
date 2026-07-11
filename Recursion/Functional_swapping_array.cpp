#include<bits/stdc++.h>
using namespace std;
int f(int a,int arr1[],int c);
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The series of array you have entered is: ";
    for (int m = 0; m < n; m++)
    {
        cout<<arr[m];
    }
    cout<<endl;
    cout<<"The array after swapping ";
    
    f(0,arr,n);
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j];
    }
    return 0;
}
int f(int a, int arr1[], int c){
    if(a>=c/2){
        return 0;
    }else
        swap(arr1[a], arr1[c-a-1]);
        return f(a+1, arr1, c);
}