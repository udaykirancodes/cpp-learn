#include<iostream>
using namespace std;
inline int product(int a , int b ){
    return a*b; 
} 
int main(){
    int a,b; 
    cout<<"Enter A : "<<endl; 
    cin>>a; 
    cout<<"Enter B : "<<endl;  
    cin>>b; 
    cout<<"Product of A & B is : "<<product(a,b)<<endl;  
    return 0;
}