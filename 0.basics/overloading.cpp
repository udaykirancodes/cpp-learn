#include<iostream>
using namespace std;
int add(int a , int b){
    cout<<"Two arguments"<<endl; 
    return a+b ; 
}
int add(int a, int b , int c){
    cout<<"Three arguments"<<endl; 
    return a+b+c; 
}
int main(){
    cout<<"Sum is : "<<add(2,3)<<endl; 
    cout<<"Sum is : "<<add(2,3,4)<<endl; 
    return 0;
}