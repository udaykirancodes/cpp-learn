#include<iostream>
using namespace std;
// Multiple Parameters 
template <class T1 , class T2>

class myclass {
    public: 
        T1 data1;
        T2 data2;
        myclass(T1 a , T2 b){
            data1  = a; 
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl; 
        }
};

int main(){
    myclass <int , char> obj(2,'A');
    obj.display(); 
    myclass <int , float> obj2(2,1.23);
    obj2.display(); 
    return 0;
}