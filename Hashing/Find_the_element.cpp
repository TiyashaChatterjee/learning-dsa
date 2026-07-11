#include<iostream>
using namespace std;
int main(){
    int A[5]={1,2,1,3,2}, count = 0, num, arr;
    cout<<"Choose any no. you want to know its repetation"<<endl;
    cin>>num;
    for (int i = 0; i < 5; i++)
    {
        if(A[i]==num){
            count++;
            arr=A[i];//It's the older method to learn about findig any elements
            // break;        
        }
    }
    cout<<"The no. of "<<num<<" is: "<<count;
    return 0;
}