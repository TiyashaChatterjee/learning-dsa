#include<iostream>
using namespace std;
class Teacher{
    private:
        int salary=50000;
    
    // access modifiers
    public:
    //Data / properties of class
        string name = "Tiyasha";
        string dept="Computer Science";
    //methods
    void changedept(string newdept){
        dept = newdept;
    }
    //setter:updating private property, meth
    void setSalary(int s){
        //set s...
        salary = s;
    }
    //getter: getting private property, method
    int getSalary(){
        return salary;
    }
//Encapsulation: is merging both properties or data and methods, in one class
};
int main(){
    //object creation
    class Teacher t;
    cout<<t.name<<endl;
    cout<<t.dept<<endl;
    cout<<t.getSalary();
    // cout<<t.salary<<endl;
    return 0;
}