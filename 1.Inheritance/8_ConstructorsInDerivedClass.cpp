#include<iostream>
using namespace std;

class Base1 {
    int data1; 
    public : 
        Base1(int i){
            data1 = i ; 
        }
        void printData1(){
            cout<<"Base1 Class constructer Called : "<<endl; 
        }
};
class Base2 {
    int data2; 
    public : 
        Base2(int i){
            data2 = i ; 
        }
        void printData2(){
            cout<<"Base2 Class constructer Called"<<endl; 
        }
};

class Derived : public Base2 , public Base1 {
    int derived1 , derived2 ; 
    public : 
        Derived(int a, int b , int c , int d ) : Base2(a),Base1(b){
            derived1 = c ; 
            derived2 = d ;
            cout<<"Derived Class constructor Called "<<endl ;  
        }
        void print(){
            cout<<"Derived Data 1 : "<<derived1<<endl;
            cout<<"Derived Data 2 : "<<derived2<<endl;
        }
}; 

int main(){
    
    Derived a(1,2,3,4);
    a.printData1(); 
    a.printData2();
    a.print();  
    
    return 0;
}