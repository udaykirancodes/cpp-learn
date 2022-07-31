#include<iostream>
using namespace std;

class complex{
    int a , b ; 
    public : 
        void printNumber(){
            cout<<"Your Number is "<<a<<" + "<<b<< "i"<<endl; 
        }
        // complex(void); // constructor declaration 
        complex(int x, int y);
            // a=10; 
            // b=20;
            
            /*
            cout<<"Enter A Number : "<<endl; 
            cin>>a;
            cout<<"Enter B Number : "<<endl; 
            cin>>b; 
            */
}; 
// constructor function 
complex :: complex(int x , int y){  // parameterized 
    a=x;
    b=y; 
}

int main(){
    // Implicit call 
    complex a(1,2); 
    a.printNumber(); 
    
    // Explicit call 
    complex b = complex(5,6); 
    b.printNumber(); 
    return 0;
}