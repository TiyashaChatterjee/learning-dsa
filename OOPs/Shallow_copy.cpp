#include<iostream>
using namespace std;
class Teacher{
    public:
        int salary;
        string name ;
        string dept;
        double *cgpaptr;
    public:
//parameterised
//constructors acts as function...
        Teacher(string name, string dept, double salary, double cgpa){
            // this-> uses to specify the property of object
            this->name = name;//right side, use to specify parameters, which is from the constructor side
            //as a parameters associated with the object in main(), is connected with the constructor, then the parameters of the constructor, is equal to the object's
            this->dept = dept;
            this->salary = salary;
            cgpaptr = new double;//pointer always allocates dynamic memory
            *cgpaptr = cgpa;
        }
//copy constructor       
//User-defined copy constructor

        Teacher(Teacher &obj){//here obj is the adress, we gonna use as formal parameter    
            this->name = obj.name;
            this->dept = obj.dept;
            this->salary = obj.salary;
            this->cgpaptr = obj.cgpaptr;
        }
//two constructors, are possible

void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Dept: "<<dept<<endl;
    cout<<"cgpa: "<<*cgpaptr<<endl;
}
};
int main(){
    Teacher t("Tiyasha Chatterjee", "Computer Science", 5000, 8.9);
    Teacher T(t);//default copy constructor

    t.getInfo();
    
    *(T.cgpaptr) = 9.2;//By this, we can update the copied constructor
    // t.name="Titli";
    t.getInfo();//It will be same as we updated object
    
    return 0;
}