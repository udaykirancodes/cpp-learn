#include<iostream>
using namespace std;

class  Y;  
class  X; 

class X{
    int data ; 
    friend void add(X , Y);
    public : 
        void setValue(int value){
            data = value ; 
        }
}; 

class Y {
    int num ; 
    friend void add(X , Y);
    public : 
        void setValue(int value){
            num  = value; 
        }
}; 

void add(X o1 , Y o2 ){
    cout<<"Summing X & Y : "<<o1.data + o2.num<<endl; 
}

int main(){
    X a; 
    Y b;
    a.setValue(2); 
    b.setValue(3);
    add(a,b);  
    return 0;
}