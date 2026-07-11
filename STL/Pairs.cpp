#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p={1,2};
    cout<<p.first<<endl<<p.second<<endl;
    pair<int,pair<int,int>>q={1,{3,4}};
    cout<<q.second.first<<endl<<q.second.second<<endl;//second's first pair
    
    pair<int,int>arr[3]={{3,2},{1,8},{8,7}};//0,1,2
    cout<<arr[1].first<<arr[2].second;
    return 0;
}