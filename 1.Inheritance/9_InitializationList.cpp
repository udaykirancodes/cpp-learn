#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor : 
constructor (argument-list ) :  initialization-section
{
    Assignment + other code; 
}
*/ 


class Test {
    public :    
    int a ; 
    int b ; 
        Test(int i , int j ) : a(i) , b(j) {
            cout<<"Constructer Executed"<<endl; 
            cout<<"Value of A is : "<<a<<endl;
            cout<<"Value of B is : "<<b<<endl;
        }
}; 

int main(){
    Test t(1,2);
    return 0;
}