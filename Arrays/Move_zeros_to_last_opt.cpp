#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void go_zeros_last(int n, int a[]){
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            for (int j = i+1; j < n; j++)
                {
                    if(a[j]!=0){
                        int temp = a[j];
                        a[j]=a[i];
                        a[i]=temp;
                    }
                    // continue;
                }
            }
            // continue; 
    }
}
int main(){
    int a[5]={1, 0, 5, 8
                           5, 0};
    cout<<"Before the sorting"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    go_zeros_last(5, a);
    cout<<"After the sorting"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}//time complexity: O(3n)
//space complexity: O(n)
//The time and Space complexity is the thig is