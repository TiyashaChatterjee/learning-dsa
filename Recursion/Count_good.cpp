#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int MOD = 1e9+7;
int count_good(int n, int i){
    if(i==n){
        return 1;//because here we are using multiplication, 1 has no such contribution in multiplication
    }
    int result;
    if(i%2==0){
        result = (5 * count_good(n , i+1))%MOD;
    }else{
        result =( 4 * count_good(n, i+1))%MOD;
    }
    return result;

}
int main(){
    int ans = count_good(5, 0);
    cout<<ans;
    return 0;
}