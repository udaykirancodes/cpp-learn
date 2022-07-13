#include<iostream>
using namespace std;

template <class T1,class T2>

void display(T1 a , T2 b){
    cout<<endl; 
    cout<<"First Number : "<<a<<endl;
    cout<<"Second Number : "<<b<<endl;
}

int main(){
    display(1,'c');
    return 0;
}