#include<iostream>
using namespace std;
class number; 
class number{
    int a; 
    public:
        number(){
            a=0; 
        }
        number(int num){
            a=num; 
        }
        // This is called Copy Constructor which copies the data of an object to the new object
        number(number &obj){
            a=obj.a; 
        }
        void display(){
            cout<<"The Number is : "<<a<<endl; 
        }
}; 

int main(){
    number x,y,z(5); 
    x.display();
    y.display();
    z.display();
    number num(z); 
    num.display(); 
    return 0;
}