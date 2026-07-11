#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <=5; i++)
    {
        char ch='A';
        //space...
        for (int j = 5; j >=i; j--)
        {
            cout<<" ";
        }
        //num1
        for (int n1 = i; n1 >=1; n1--)
        {
            cout<<ch;
            ch++;
        } 
        //num2
        char ch2 = 'A';
        for (int n2 = 1; n2 <=i-1; n2++)
        {   
            cout<<ch2;
            ch2++;
        }
        
       cout<<endl; 
    }
    

    return 0;
}