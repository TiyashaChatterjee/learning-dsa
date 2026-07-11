#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array size: ";
    cin>>n;

    int A[n], temp[100];
    cout<<"Enter the elements of the array"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    int place;
    cout<<"Enter the place upto which you want to place elements: ";
    cin>>place;
//taking input...
    for (int i = 0; i <= place; i++)
    {
        temp[i]=A[i];
    }
    //So here the loop is running for place times, so time complexity is O(place)
//shifting...
    for (int j = place; j < n; j++)
    {
        A[j-place]=A[j];
    }
    //So here the loop is running for n-place times, so time complexity is O(n-place)
//puting back...
    for(int k = n-place; k < n; k++)
    {
        A[k] = temp[k-(n-place)];
    }
     //Also the loop is running for n-place times, so the time complexity is O(n-place)
    
//traversal...
    for (int l = 0; l < n; l++)
    {
        cout<<A[l];
    }
   
    return 0;
}
//Overall time complexity is O(n-place)+O(place)+O(n-place)= O(n+place)