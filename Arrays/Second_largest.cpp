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
//sorting
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
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
//second largest
        int largest = A[n-1];
        for (int l = n-2; l >= 1; l--)
        {
            if((largest>A[l])&&(largest!=A[l])){
                cout<<endl;
                cout<<"The second largest element is: "<<A[l];
                break;
            }
            else{
                continue;
            }
        }
    return 0;
}
