#include<iostream>
#include<string>
using namespace std;
int Binary_to_Decimal(string x){//x = 1011
    int l = x.length();//l = 4
    int num = 0;//here it should be in int....cause the number we want is a decimal
    int p1 = 1;
    for (int i = l-1; i >= 0; i--)//i = 3
    {
        if(x[i]=='1'){
            num = num + p1;
        }
        p1 = p1 * 2; 
    }
    
    return num;
    
}
int main(){
    int res = Binary_to_Decimal("1011");
    cout<<res;
    return 0;
}//Space complexity: O(1)
//time complexity: O(len)
// How to store computer a negative number:2's complement over it