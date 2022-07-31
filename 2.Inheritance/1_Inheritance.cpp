#include<iostream>
using namespace std;

// Base class 
class Employee{
    public : 
        int id; 
        float salary; 
        Employee(int inp ){
            id = inp;
            salary = 3; 
        }
        Employee(){}
}; 

// Derived Class Syntax 
// class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
// {
//     // members , methods , etc 
// } 

class Programmer : public  Employee{
    public: 
        int languageCode = 9; 
        Programmer(int inp ){
            id = inp;
            salary = 5; 
        }
        void programmerSalary(){
            cout<<"Salary :"<<salary<<endl;
        }
}; 

int main(){
    Employee uday(1);
    Employee kiran(3);

    Programmer udaykiran(1);
    udaykiran.programmerSalary(); 
    // cout<<udaykiran.salary<<endl; 
    cout<<udaykiran.languageCode<<endl;
    return 0;
}