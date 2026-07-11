#include<iostream>
using namespace std;
class Queue{
    int size;
    int queue[10];
    int cur_size = 0;
    int start = -1;
    int end = -1;
//Methods
public:
    void push(int x){
        if(start==-1 || end == -1){
            start = (start + 1) % 10;//if both hasn't started
        }
        if(cur_size >= 10){
            cout<<"The Queue is Overflowed";
        }
        end = (end + 1) % 10;//We are forced to make it circular array; end = 1, (0+1) % 5 = 1, end = 2, (2+1) % 5 = 3 end = 4, (4+1) % 5 = 0
        queue[end] = x;
        cur_size++;
    }

    void pop(){
        if(cur_size == 0){
            cout<<"No elements are left here";
            return;
        }
        start = (start + 1) % 10;//because, it is FIFO
        cur_size--;
    }//T.C = O(1)
    void display(){
        if(cur_size==0){
            cout<<"The Queue is Empty";
            return;
        }
        for (int i = start; i <= end; i++)
        {
            cout<<queue[i]<<" ";
        }
        
    }//T.C = O(N)
    
};
int main(){
    class Queue q;
    q.push(40);
    q.push(90);
    q.push(190);
    q.pop();
    q.push(20);
    q.display();
    return 0;
}//Time complexit