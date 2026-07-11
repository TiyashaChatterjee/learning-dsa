#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v(4, 80);
    v.push_back(1);//adding a element to the end of the vector
    v.emplace_back(2);//Both are almost same, but it is more efficient

//Using the pairs
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1, 2);

    vector<int>v1(5, 100);//I am declaring a vector, and adding 5 times of 100
    v1.push_back(2);
    v1.emplace_back(1);
    vector<int>v3(5); //adding 5 times of 0s
    vector<int>v4(v1);
    //assingning v3 to v1

    //Accessing the elements of vectors
    cout<<v1[4]<<endl;//100
    cout<<v[4]<<endl;//We use push_back, 1
    //Iterator method...
    vector<int>::iterator it = v.begin();//This is pointing the after the first memory of the vector
    *it++;
    cout<<*it<<endl;//by adding *, this will accessing the elements of the memory, which is declared and changed, by above lines, 80
    vector<int>::iterator it2 = v1.end();//element that after the last element
    *it2--;//indicating the last element
    cout<<*it2<<endl;//1
    cout<<v1.back()<<endl;//back indicating, last element of the vectors

    //Printting loop of it
    // for(vector<int>::iterator it = v.begin(); it <= v.end(); it++){
    //     cout<<*(it)<<endl;//4*80
    // }//
//shorten
    // v.erase(v.begin());
    for(auto (it) = v.begin(); (it)!=v.end();it++){
        cout<<*(it)<<endl;
    }
    vector<int>vek={1, 2, 3, 4, 5};
    //Erasing vector...
    vek.erase(vek.begin()+1);//It is deleting the index 1, which is 2
    for(auto it = vek.begin(); it != vek.end(); it++){
        cout<<*(it)<<endl;
    }
    //Inserting vector

    
    return 0;
}