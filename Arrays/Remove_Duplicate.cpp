#include <iostream>
using namespace std;
int main(){
    int n, temp;
    cout<<"Enter n: ";
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (A[min]>A[j])
            {
                min = j;
            }
        }
        temp = A[min];
        A[min]= A[i];
        A[i]= temp;
        
    }
    cout<<"The sorted array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    //Here is the actual action begins...

    
    for (int i = 0; i < n; i++)//this loop chooses the value
    {
        int value = A[i];
        for (int j = i+1; j < n; j++)//this loop compares
        {
            if(value==A[j]){
                for (int k = j; k < n-1; k++)//This loop is removing of elements of the array
                {
                    A[k]=A[k+1];
                }
                n--;
            }
        }
        
    }
    cout<<endl;
    cout<<"After the operation"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<A[i]<<" ";
}

    
    return 0;
}