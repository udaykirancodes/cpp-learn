#include<iostream>
using namespace std;
// SINGLE INHERITANCE 

class Base{
    int data1; // private & not inheritable 
    public :
        int data2;
        void setData(); 
        int getdata1(); 
        int getdata2(); 
}; 
void Base :: setData(){
    data1 = 10;
    data2 = 20;
}
int Base :: getdata1(){
    return data1; 
}
int Base :: getdata2(){
    return data2; 
}
class Derived : public Base{ // class is being derived publically 
    int data3 ; 
    public :
        void process();
        void display();
}; 

void Derived :: process(){
    data3 = data2*getdata1(); 
}
void Derived :: display(){
    cout<<"Value of Data 1 : "<<getdata1()<<endl; 
    cout<<"Value of Data 2 : "<<data2<<endl; 
    cout<<"Value of Data 3 : "<<data3<<endl; 
}
int main(){
    Derived d; 
    d.setData(); 
    d.process();
    d.display();
    return 0;
}