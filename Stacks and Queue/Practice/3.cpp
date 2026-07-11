#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int trapped(vector<int> &height){
    int totalwater = 0;
    int n = height.size();
    for (int i = 0; i < n; i++)
    {
        int prime = height[i];
        for (int j = 0; j <= i; j++)

        {   
            totalwater = totalwater - height[j];
        }
        
    }
    


}

int main(){
    vector<
    return 0;
} 
