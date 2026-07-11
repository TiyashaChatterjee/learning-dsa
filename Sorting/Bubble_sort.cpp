#include<iostream>
using namespace std;
void swap(int *a, int *b);//local variable for the function swap
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: ";//5 8 6 2 4
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int j=0;j<n-1; j++){//0 to 3 times, 1 to.., 2 to ..., 3 to 
        for(int k = 0; k<n-j-1; k++){//0 to 1 times, 1 to 1, 2 to 1
            if(A[k]>A[k+1]){//A[0]>A[1](not work);A[1]>A[2];A[2]>A[3], A[1]>A[2]
                swap(&A[k], &A[k+1]);//5 6 8 2 4; 5 6 2 8 4, 5 2 6 8 4;  
            }
        
        }
    }
    for(int l=0; l<n; l++){
        cout<<A[l];
    }  
    
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    // return (a,b);//because we are not returning any thing so, this change is only happens in the function
}