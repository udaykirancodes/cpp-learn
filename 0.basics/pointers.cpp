#include<iostream>
using namespace std;
int main(){
    int a = 100; 
    int* b = & a;
    cout<<"The value of a is : "<< a <<endl; 
    cout<<"The Address of a is : "<< b <<endl; 

    cout<<"The Value of b is : "<< b <<endl; 
    cout<<"The Address of b is : "<< &b <<endl; 
    return 0;
}