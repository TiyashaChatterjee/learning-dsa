#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int j = 0; j < n; j++)
    {
        int min = j;
        for (int k = j+1; k < n; k++)
        {
            if (A[min]>A[k])
            {
                min = k;
            }
            
        }
        int temp = A[min];
        A[min] = A[j];
        A[j] = temp;
        
    }
    cout<<"The Highest element in the array is: "<<A[n-1];
    
    
    
    return 0;
}