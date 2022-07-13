#include<iostream>
using namespace std;
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0}; 
    cout<<endl<<"Array : ";
    for(int i=0 ; i<10 ; i++){
        cout<<a[i]<< " "; 
    }
    // Access with Pointers 
    int* p = a; 
    cout<<"\nDereference : "<<endl; 
    cout<<"The value of First Elemnt : "<<*(p)<<endl; 
    cout<<"The value of Second Elemnt : "<<*(p+1)<<endl; 
    return 0;
}