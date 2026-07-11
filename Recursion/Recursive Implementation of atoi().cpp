#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define MAX  2147483647
#define MIN  -2147483648
 
int helper(string &s, int i, long long num, int sign){
//The BASE Condition
    if(i >= s.size() || !isdigit(s[i])){
        return (int) (sign * num);
    }
    //calculation of num
    num = (num * 10) + (s[i] - '0');

    //Clamping to the min and max value
    if(sign * num >= MAX){
        return MAX;
    }
    if(sign * num <= MIN){
        return MIN;
    }
    //Recursive step, Tail Recursion
    return helper(s, i+1, num, sign);
}
int myAtoi(string s, int i = 0){
    while(i < s.size() && s[i]==' ') i++; //Ignoring the whitespace

    int sign = 1;
    if(i < s.size() && (s[i] == '-' || s[i] == '+')){//Detect the sign 
        sign = (s[i]=='-')? -1 : 1;
        i++;
    }
    return helper(s, i, 0, sign);
}
int main(){
    string s = "  -12345";
    cout << myAtoi(s) << endl;  // Output: -12345
    return 0;
}