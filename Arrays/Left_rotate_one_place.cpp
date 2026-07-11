#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int A[n]={2, 8, 5, 6};

    
    int temp=A[0];//You have to store the value in a variable, that's the funda
    for (int i = 0; i < n; i++)
    {
        A[i]=A[i+1];
    }
    A[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    
    return 0;
    //This algo has time complexity of O(n): It is using n times of iterations (worst case) and 
    //space complexity of O(1): It is working only on the existing array, not copying the others

}