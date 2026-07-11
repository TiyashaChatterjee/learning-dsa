#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v1={1, 2, 3, 8, 9, 11};
    // cout<<v1[4]<<endl;//9
    vector<int>::iterator it = v1.begin();
    vector<int>::iterator it2 = v1.end();

    // cout<<v1.back()<<endl;
//inline, because it is not indicating any memory location
    // cout<<*it<<endl;
    // cout<<*it2<<endl;
//it is not defined by anything

    v1.push_back(13);
    v1.emplace_back(15);
    // v1.erase(v1.begin());
    // v1.erase(v1.begin(), v1.begin()+3);


//1, 3 deleting, couple of elements, REMEMBER.   you have to give it, [start, end) like that
for(auto it3 = v1.begin(); it3 != v1.end(); it3++){
    // cout<<*it3<<endl;
}


//Inserting ...
    v1.insert(v1.begin(), 150);
    // cout<<v1[0]<<endl;
//when u have to insert multiple same numbers
    v1.insert(v1.begin()+1,2,5);
    // cout<<v1[1]<<endl;
//entering a whole vector

    vector<int>in(2, 50);
    v1.insert(v1.begin(), in.begin(), in.end());
    // cout<<v1[0]<<endl<<v1[1]<<endl;

    for(auto it3 = v1.begin(); it3 != v1.end(); it3++){
        cout<<*it3<<endl;
    }
    cout<<v1.size()<<endl;

    v1.pop_back();

    v1.swap(in);
    cout<<endl;

    cout<<in[0]<<in[1]<<in[2]<<in[3];
    cout<<v1.empty();//checking for if it is truely or not 
    return 0;
}