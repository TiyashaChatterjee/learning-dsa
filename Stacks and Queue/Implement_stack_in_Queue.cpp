#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    queue<int>q;
    void push(int x){
        int s = q.size();
        q.push(x);
        for (int i = 1; i <= s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    } 
    void pop(){
        q.pop();
    }
    int top(){
        return q.front();
    }
    void display(){
        while (!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
    }
};
int main(){
    class Queue q;
    q.push(9);
    q.push(7);//7 9
    q.push(4);//4 7 9
    q.pop();//After getting stack format it removes the top element
    q.push(45);//45 7 9 
    q.display();
    return 0;
}