#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int r = n; r>=1; r--){//Opposite,5, 4, 3
        //for space...
        for(int i = 1; i<= n-r+1; i++){
            cout<<i;//not, 1, 2, 3,...., u can change the initiations, like n-r+1 to 1
        }
        for(int s = 1; s<= r; s++){
            cout<<" ";//not, 5, 4, 3, "it is not that, always not opposite, can be opposite"
        }
        
        for (int j = 1; j <= r-1; j++)
        {
            cout<<" ";//not,4, 3, 2 like the above 
        }
        for(int i = n-r+1; i>=1; i--){
            cout<<i;//not, 1, 2, 3,...., u can change the initiations, like n-r+1 to 1
        }
        cout<<endl;
    }
    return 0;
}