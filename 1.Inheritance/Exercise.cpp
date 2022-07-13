#include<iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes : 
    1.simple calculator  
        -> Takes input of two numbers using a utility function & perform + - * /  
        and display the result using another function  
    2.scientific calculator 
        -> Takes input of two numbers using a utility function & perform any four scientific operations 
        and display the result using another function  
Create another class HybridCalculator and inherit it using these 2 classes: 
    1. What type of inheritance are you using ? 
    2. Which mode of inheritance are you using ? 
    3. Create an object of HybridCalculator and display results of simple and scientific calculator. 
    4. How is code reusability implemented ? 
*/

class simpleCalc{
    int a ,b ; 
    public : 
        void getData(){
            cout<<"Enter the value of A"<<endl; 
            cin>>a;
            cout<<"Enter the value of B"<<endl; 
            cin>>b;
        }
        void performOperationsSimple(){
            cout<<"The value of A + B is : "<<a+b<<endl; 
            cout<<"The value of A - B is : "<<a-b<<endl; 
            cout<<"The value of A * B is : "<<a*b<<endl; 
            cout<<"The value of A / B is : "<<a/b<<endl; 
        }

}; 
class scientificCal{
    int a ,b ; 
    public : 
        void getData(){
            cout<<"Enter the value of A"<<endl; 
            cin>>a;
            cout<<"Enter the value of B"<<endl; 
            cin>>b;
        }
        void performOperationsScientific(){
            cout<<"The value of COS(A) : "<<cos(a)<<endl; 
            cout<<"The value of SIN(A) : "<<sin(a)<<endl; 
            cout<<"The value of Exp(A) : "<<exp(a)<<endl; 
            cout<<"The value of TAN(A) : "<<tan(a)<<endl; 

        }
};

class Hybrid : public simpleCalc , public scientificCal {
        public : 
            void getData(){
                scientificCal :: getData(); 
            }
            void Perform(){
                performOperationsSimple();
                performOperationsScientific();
            }
}; 

int main(){
    Hybrid c; 
    c.getData();
    c.Perform(); 
    return 0;
}