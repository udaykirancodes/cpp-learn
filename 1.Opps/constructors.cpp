#include<iostream>
using namespace std;

class complex{
    int a , b ; 
    public : 
        void printNumber(){
            cout<<"Your Number is "<<a<<" + "<<b<< "i"<<endl; 
        }
        // complex(void); // constructor declaration 
        complex(){
            // a=10; 
            // b=20;
            
            /*
            cout<<"Enter A Number : "<<endl; 
            cin>>a;
            cout<<"Enter B Number : "<<endl; 
            cin>>b; 
            */
        } 
}; 
// constructor function 
// 
// complex :: complex(void){
//     cout<<"Hello World"<<endl; 
//     a=10;
//     b=20; 
// }

int main(){
    complex a; 
    a.printNumber(); 
    return 0;
}