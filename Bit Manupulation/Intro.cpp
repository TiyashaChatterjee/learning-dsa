#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
string deci_to_binary(int n){
    string res = "";//n = 8
    while(n > 0){
        if(n%2==0){
            res = res + "0";//res = " " + "0" ==> res = 0
        }
        else{
            res = res + "1";
        }
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    int s = 13;
    string result = deci_to_binary(s);
    cout<<result;
    return 0;
}//time complexity: log2(n)
//space complexity: 'res' is basically storing the entity...in order of log2(n)-->because it...
//1 binary digit → can represent up to 1 (numbers 0–1)
// 2 binary digits → can represent up to 3 (numbers 0–3)
// 3 binary digits → can represent up to 7 (numbers 0–7)
//the pattern is k is the binary digits, and 2^k-1 is the numbers it stores
//because it is storing the same binary digit....log2(n)