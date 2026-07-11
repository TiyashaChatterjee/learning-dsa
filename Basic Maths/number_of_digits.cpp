#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter n: ";
    cin >> n;

    while (n != 0) {
        count++;
        n = n / 10;//when a iteration in dividing with n, where n=2,3,10,..., the time complexity will be O[logl 10(n)]
    }
    cout << "No. of digits is: " << count << endl;

//Another step to do
    count = (int)(log10(n)+1);// remember it
    cout<<count;
    return 0;
}
