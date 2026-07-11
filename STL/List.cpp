#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>lis;
    lis.push_back(2);
    lis.emplace_back(4);
    //insert front...
    lis.push_front(5);
    list<int>::iterator it = next(lis.begin());
    list<int>::iterator it3 = lis.begin();
    cout<<*it<<endl<<*it3<<endl;
    return 0;
}//like deque