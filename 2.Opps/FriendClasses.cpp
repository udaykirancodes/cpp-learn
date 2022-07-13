#include<iostream>
using namespace std;
class complex ; // forward declaration 
class calculator{
    public:
        int add(int a , int b){
            return a+b; 
        }
        int sumRealComplex(complex , complex );
};

class complex
{
    private:
        int a ,  b; 
        // individually declaring as friends 
        // friend int calculator :: sumRealComplex(complex o1 , complex o2 ); 
        // declaring the entire class as friend
        friend class calculator ;  

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

 
int calculator :: sumRealComplex(complex o1 , complex o2 ){
    return (o1.a+o2.a); 
}
int main(){
    complex o1 , o2 ; 
    o1.setNumber(1,2);
    o2.setNumber(1,2);
    calculator calc; 
    int res = calc.sumRealComplex(o1,o2); 
    cout<<"The sum of real part of o1 & o2 : "<<res<<endl; 
    return 0;
}