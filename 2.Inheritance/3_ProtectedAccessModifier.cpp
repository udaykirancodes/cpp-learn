#include<iostream>
using namespace std;

class Base {
    protected : 
        int pro; 
    public : 
        int a; 
        int b; 
}; 

class Derived : protected Base{


}; 

int main(){
    
    return 0;
}