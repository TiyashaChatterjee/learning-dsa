#include<bits/stdc++.h>
using namespace std;
int printdivisor(int);
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    printdivisor(n);
    return 0;
}
int printdivisor(int a){
    vector<int> lis;
    //for loop time complexity is O(sqrt(n))
    for(int i = 1; i*i<= a; i++){
        if(a%i==0){//
            // cout<<i<<" ";//1, 2, 5
            lis.push_back(i);
            if(a/i != i){
                // cout<<n/i<<" ";//36, 18,
                lis.push_back(a/i);
            }
        }
    }
    sort(lis.begin(), lis.end());//it generally sort the numbers in a particular order, this technique has a time complexity, O(n log n), n = no. of elements in the vectors = sqrt(n)
    for(auto it:lis) cout<<it<<" ";//by this we can print it out, time complexity is O(sqrt(n))
}//All over time complexity is O(sqrt(n) * log sqrt(n))