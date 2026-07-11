#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int r = 1; r<=n; r++){//1
        //for space...
        for(int i = 1; i<= n-r+1; i++){
            cout<<" ";//
        }
        for(int s = 1; s<= r; s++){
            cout<<"*";
        }
        
        for (int j = 1; j <= r-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        for(int r = n; r>=1; r--){//1
            //for space...
            for(int i = 1; i<= n-r+1; i++){
                cout<<" ";//
            }
            for(int s = 1; s<= r; s++){
                cout<<"*";
            }
            
            for (int j = 1; j <= r-1; j++)
            {
                cout<<"*";
            }
        

        cout<<endl;
    }
    return 0;
}