#include<iostream>
using namespace std;
class complex
{
private:
    int a ,  b; 
public:
    void setNumber(int n1 , int n2){
        a=n1;
        b=n2; 
    }
    friend complex sumComplex(complex o1 , complex o2 ); 
    void printNumber(){
        cout<<"Your Complex Number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumComplex(complex o1, complex o2){
    complex o3; 
    o3.setNumber((o1.a + o2.a),(o1.b+o2.b)); 
    return o3; 
}

int main(){
    complex n1 , n2 , sum ; 
    n1.setNumber(1,2); 
    n1.printNumber(); 
    n2.setNumber(1,2); 
    n2.printNumber(); 
    sum = sumComplex(n1,n2);
    sum.printNumber();  
    return 0;
}