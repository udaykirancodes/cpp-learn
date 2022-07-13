#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base ; 
    void display(){
        cout<<"Base class Var Base : "<<var_base<<endl; 
    }
}; 

class DerivedClass : public BaseClass{
    public:
    int var_derived ; 
    void display(){
        cout<<"Derived class Var Derived : "<<var_derived<<endl; 
    }

}; 

int main(){
    BaseClass *base_class_pointer ; 
    BaseClass obj1; 
    DerivedClass obj_derived; 
    base_class_pointer = &obj_derived;   // pointing base class pointer to derived class  
    base_class_pointer->var_base = 20; // we will have access to the base class 
    base_class_pointer->display();   // we will get base class display function  

    DerivedClass *derived_class_pointer = &obj_derived; 
    derived_class_pointer->var_derived = 10; 
    derived_class_pointer->display(); 
    return 0;
}