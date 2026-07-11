#include<iostream>
using namespace std;
class Teacher{
    public:
        int salary;
        string name ;
        string dept;
    public:
//Non parameterised
        Teacher(){
            dept = "Computer Science";
        }
//parameterised
        Teacher(string name, string dept, double salary){
            // this-> uses to specify the property of object
            this->name = name;//left is from object
            this->dept = dept;
            this->salary = salary;
        }
//copy constructor       
//User-defined copy constructor

        Teacher(Teacher &obj){//here obj is the adress of the acctual object, we gonna use as formal parameter, so whatever name is possible  
            this->name = obj.name;//obj.name = original object & this->name = the property of the current object, which is invoked, ex: Teacher T
            this->dept = obj.dept;
            this->salary = obj.salary;
        }
//two constructors, are possible

void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Dept: "<<this->dept<<endl;
} 
};
int main(){
    //object creation
    Teacher t("Tiyasha Chatterjee", "Computer Science", 5000);
    // class Teacher T;//whenever, I create a new object, constructor, starts working
    // t.name="Tiyasha Chatterjee";
    //because, all have default value of dept, in constructor

    Teacher T(t);//default copy constructor, it works, when there is no user defined copy constructor
    T.getInfo();
    
    return 0;
}