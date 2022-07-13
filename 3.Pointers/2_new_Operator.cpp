#include<iostream>
using namespace std;

class Complex {
    int real , img; 
    public : 
        Complex(){
            real = 10; 
            img = 20; 
        }
        void getData(){
            cout<<"Real Part is : "<<real<<endl;
            cout<<"img Part is : "<<img<<endl;
        }

}; 

int main(){
    // Old way of creating Objects 
    Complex a;
    Complex *ptr = &a;
    // a.getData(); 
    // using New Operator 
    (*ptr).getData();
    // Arrow Operator  
    ptr->getData(); 


    // Array of Objects 
    Complex *ptr1 = new Complex[4]; 
    ptr1->getData();
    return 0;
}