#include<iostream>
using namespace std;

// syntax

template <class T1=int , class T2=int>

class data{
    public : 
        T1 data1;
        T2 data2;
        // constructor 
        data(T1 a , T2 b){
            data1 = a; 
            data2 = b; 
        }
        void display(){
            cout<<endl; 
            cout<<"Data 1 : "<<data1<<endl;
            cout<<"Data 2 : "<<data2<<endl;
        }
};

int main(){
    data <> def(1,2); 
    def.display();
    data <int , char> def2(1,'c'); 
    def2.display();
    return 0;
}