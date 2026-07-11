#include<iostream>
using namespace std;
int main(){
    int n, choice=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    while (n>1)
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int  j = i+1; j < n; j++)
            {
                if (A[min]<=A[j])
                {
                    min = j;
                    choice = 1;
                }else{
                    cout<<"False, This is not a sorted array";
                    return 1;
                }     
            }
        }
        n--;
        
    }
    if(choice==1){
        cout<<"This is a sorted array";
    }
    
    return 0;
}