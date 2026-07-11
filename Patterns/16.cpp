#include<iostream>
using namespace std;
//important 
int main(){
    for (char i = 1; i <=5; i++)//1, 2
    {
        for (int j = 1; j <=i; j++)
        {
            char ch = 'A';
            ch = ch + i - 1;//A, B, ...
            cout<<ch<<" ";
        }
       cout<<endl; 
    }
    
    return 0;
}