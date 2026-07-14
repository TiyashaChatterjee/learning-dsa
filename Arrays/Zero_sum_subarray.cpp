#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Find(vector<int> &arr)
{
    int maxi = 0;
    int n = arr.size();
    int len = 0;
    // int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                len = j - i + 1;
                maxi = max(maxi, len);
            }
        }
    }
    return maxi;
}
int main()
{
    vector<int> v = {9, -3, 3, -1, 6, -5};
    cout << Find(v);
    return 0;
}

//Time Complexity: O(n^2)
//Space complexity: O(1)