#include<iostream>
using namespace std;
class Teacher{
    public:
        int salary;
        string name ;
        string dept;
        double *cgpaptr;//Deep copy and Shallow copy are only applicable for dynamic memory allocation
        //which a pointer can do
    public:

        Teacher(string name, string dept, double salary, double cgpa){
           
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
            cgpaptr = new double;
            *cgpaptr = *obj.cgpaptr;//we are copying the original value of cgpaptr from the object  to new allocated object's cgpaptr
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
    T.name="Titli Chatterjee";
    t.getInfo();//Now, for the updation above, there is no change in the original object
    
    return 0;
}