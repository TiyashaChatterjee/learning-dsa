#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5, j, temp;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        int min = i;
        for(j=i+1;j<n;j++){
            if(num[j]<num[min]){
                min = j;
            }
        }
        temp = num[min];
        num[min]=num[i];
        num[i] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    return 0;
}
