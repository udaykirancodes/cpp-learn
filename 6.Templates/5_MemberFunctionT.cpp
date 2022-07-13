#include<iostream>
using namespace std;
// MEMBER FUNCTION TEMPLATES 
template <class T>
class uday {
    public : 
        T data; 
        uday(T a ){
            data = a; 
        }
        void display();
}; 
template <class T>
void uday<T> :: display(){
    cout<<"data : "<<data<<endl; 
}
int main(){
    uday <int>u(1);
    u.display(); 
    uday <char>y('U'); 
    y.display(); 
    return 0;
}