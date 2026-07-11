#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <=4; i++)
    {
        cout<<"*";
    }
    cout<<endl;
//start...
    for (int j = 1; j <=2; j++)
    {
        cout<<"*";
        for (int k = 1; k <=2; k++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for (int i = 1; i <=4; i++)
    {
        cout<<"*";
    }

    return 0;
}