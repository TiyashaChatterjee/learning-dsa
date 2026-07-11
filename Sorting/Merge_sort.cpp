#include<bits/stdc++.h>
using namespace std;
void mergesort(int A[], int low, int high);
void merge(int A[], int low, int mid, int high);
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: ";  
    for(int c=0; c<n; c++){
        cin>>A[c];
    }
//Merging sorting
    int low = 0;
    int high = n-1;
    mergesort(A, low, high);
    cout<<"The sorted array is: ";
    for(int p=0; p<n; p++){
        cout<<A[p]<<" ";
    }
    cout << endl;
    return 0;
}
void mergesort(int A[], int low, int high){
    int mid;
    if(low == high){
        return;
    }
        mid = (low + high)/2;
        mergesort(A, low, mid);
        mergesort(A, mid+1, high);
        merge(A, low, mid, high);
    
}
void merge(int A[], int low, int mid, int high){
    int temp[100];
    int ind = 0;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(A[left]<=A[right]){
            temp[ind] = A[left];
            left++;
            ind++;
        }else{
            temp[ind]=A[right];
            right++;
            ind++;
        }
    }
    while(left <=  mid){
        temp[ind]=A[left];
        left++;
        ind++;
    }
    while(right <= high){
        temp[ind]=A[right];
        ind++;
        right++;
    }
    for(int i=low; i<ind; i++){//i=0;i<4;i++
        A[i] = temp [i];//A[0]=temp
    }
}
// The time complexity of merge sort is O(n log n) in all cases (worst, average, and best).