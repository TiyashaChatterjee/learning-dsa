#include<iostream>
using namespace std;

int main(){//first line
    for (int f = 1; f <=10; f++)
    {
        cout<<"*";
    }
    cout<<endl;
    //
    for (int l1 = 1; l1 <= 4; l1++)
    {
        for (int i = 4-l1+1; i >=1; i--)
        {
            cout<<"*";
        }
        //space
        for (int s = 1; s <= l1; s++)
        {
            cout<<" ";
        }
        for (int s = 1; s <= l1; s++)
        {
            cout<<" ";
        }
        //star
        for (int j = 4-l1+1; j >=1; j--)
        {
            cout<<"*";
        }
        
        
        cout<<endl;
    }

    //2nd part
    for (int l1 = 1; l1 <= 4; l1++)
    {
        for (int i = 1; i <=l1; i++)
        {
            cout<<"*";
        }
        //1st space...
        for (int s = 1; s <= 4-l1+1; s++)
        {
            cout<<" ";
        }
        //2nd space...
        for (int s = 1; s <= 4-l1+1; s++)
        {
            cout<<" ";
        }
        //star
        for (int j = l1; j >=1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //last one..
    for(int l=1; l<=10; l++){
        cout<<"*";
    }
    cout<<endl;
    

    
    return 0;
}