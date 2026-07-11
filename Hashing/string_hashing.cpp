#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;//"apple"
    cout<<"Enter the word"<<endl;
    cin>>s;
//hashing...
    int hash[26]={0};//bucket to store the element a to z
    for (int i = 0; i < s.size(); i++)// 0 to the size of the string
    {
        hash[s[i] - 'a']++;//it will store the values to the hash
    }
        int q;
        cout<<"Enter the number of characters: ";
        cin>>q;
        while(q--){
            char c;
        // cout<<"Enter the character you are going to count: ";
            cin>>c;//'p'
        cout<<hash[c-'a']<<endl;//hash['p'-'a']
        }
        
    
    return 0;
}
