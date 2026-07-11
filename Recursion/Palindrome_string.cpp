#include<iostream>
using namespace std;
int f(int a,string s1[]);
int main(){
    int n;
    char ch;
    cout<<"Enter n: ";
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ch;
        // const char* cstr = s.c_str();
        s[i]+=ch;
    }
    f(0,s);
    for (int j = 0; j < n; j++)
    {
        cout<<s[j];
    }
    
    return 0;
}
int f(int a, string s1[]){//When there is a time for function declaration it is necessary to print [] with stirng and array
    if(a>=5/2){
        cout<<"True"<<endl;
        return 0;
    }else if(s1[a]!=s1[5-a-1]){
        cout<<"False"<<endl;
        
    }
    else
    return f(a+1,s1);
    // cout<<"True";
}