#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, min, temp;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];//1 6 9 2 4
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];//time complexity is O[n^2]
    }
    for(int j=0;j<n-1;j++){//swapping
       min =  j;//min=0
       //j=0 to 3
       //j=0 to 3; j=1 to 3; j=2 to 3; j=3 to 3
       for(int k=j;k<n;k++){//k=0 to 4
        if(A[k]<A[min]){//A[0]<A[0]; A[1]<A[0]
            min = k;//min = k
        }
       }
       temp = A[min];
       A[min]=A[j];
       A[j] = temp;
    }
//printing the sorted array
    for(int i = 0; i<n ; i++)
    {
        cout<<A[i];
    }
    return 0;
}