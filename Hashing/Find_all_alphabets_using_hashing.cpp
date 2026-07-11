#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the string"<<endl;
    string str;
    cin>>str;//tiyasha 
    int hash[256]={0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]]++;//hash[str[0]]=hash[(int)t]=hash[71]; hash[1]=hash[69]; hash[y]; hash[a]; hash[s]; hash[h]; hash[a]
    }
    cout<<"Enter the character you want to count"<<endl;
    char c;
    cin>>c;//c='a'
    cout<<"The character "<<c;
    cout<<" is here for "<<hash[c]<<" times.";//hash[a]=hash[71]
    return 0;
}