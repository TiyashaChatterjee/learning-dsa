//Taking a number from array and storing it's frequency in Map
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, question = 0;
    cout<<"Enter n: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
     unordered_map<int,int>mpp;//<key, value>
     //key: Array's element
     //value: Frequency of the array's element
     for(int j=0;j<n;j++){
        mpp[A[j]]++;
     }

    //iterate throught the map->unsorted
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;//it.first = key and it.second = value
    }
     int q;
     cout<<"Enter the no. of questions you gonna ask: ";
     cin>>q;//q = 2

     while(q--){//Untill the q becomes 0; q = 1
        int num;
        question++; //q = 2
        cout<<"Enter the "<<question<<" number question: ";
        cin>>num;
        cout<<"Number of times "<<num<<" has in the array is: "<<mpp[num]<<endl;
     }//Any kind of fetching, storing has time complexity log(n)
    return 0;
}