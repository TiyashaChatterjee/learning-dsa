#include <bits/stdc++.h>
// #include <string>
using namespace std;

string determineColor(string &s) {
    int row = s[0]-'a'+1; //conver the string (alphabet) to a number
    int column = s[1]-'0'; //convert string (number) as number
    int sum = row + column;
   if(sum%2==0){
        return "Black";
   }else{
    return "White";
   }
}

int main() {
    string s;
    cin >> s;  
    string result = determineColor(s);
    cout << result << endl;
    return 0;
}