#include<bits/stdc++.h>
using namespace std;
//Bubble sort in increasing order
void sort(int n, int arr[]);//Function Declaration
int main(){
    //declaration
    int n;
    cout<<"Enter n: ";
    cin >> n; 
    int arr[n];
    //fetching
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    //function call
    sort(n, arr);
    //printing
    for(int j=0;j<n;j++){
        cout<<" "<<arr[j];
    }
    return 0;
}
 void sort(int n, int arr[]){//function definition
    int t;
    //Base Case...
    if(n==1){
        return;
    }else{
        for(int i=0;i<n;i++){//n-1 times
            if(arr[i]>arr[i+1]){//arr[0]>arr[1] -> swap them(arr[0]&arr[1])
                t = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
    }
    //Recursive call
    sort(n-1, arr);
}