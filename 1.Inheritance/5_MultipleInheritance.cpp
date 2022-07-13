// A ->
//      --> C 
// B -> 

#include<iostream>
using namespace std;

class Base1 {
    protected : 
        int base1int; 
    public :
        void set_base1int(int a){
            base1int = a; 
        }
}; 
class Base2 {
    protected : 
        int base2int; 
    public :
        void set_base2int(int a){
            base2int = a; 
        }
}; 
class Derived : public Base1 , public Base2 {
    public : 
        void show(){
            cout<<"The value of Base1 : "<<base1int<<endl;
            cout<<"The value of Base2 : "<<base2int<<endl;
            cout<<"The Sum is : "<<base2int+base1int<<endl;
        }
}; 
int main(){
    Derived uday; 
    uday.set_base1int(1);
    uday.set_base2int(2);
    uday.show(); 
    return 0;
}