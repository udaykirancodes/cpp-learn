#include<iostream>
using namespace std;

int main(){
    // Basic Example 
    int a = 4; 
    int *ptr = &a ; 
    cout<<"The Value of PTR : "<<*ptr<<endl;

    // New Keyword ; 
    int *p = new int(40); 
    cout<<"The value at Address P is : "<<*p<<endl;  
    float *f = new float(40.2); 
    cout<<"The value at Address F is : "<<*f<<endl;

    // Array ; 
    int *arr = new int[4];

    arr[0]=2;
    arr[1]=3;
    arr[2]=3;
    arr[3]=4;
    delete[] arr; 
    cout<<"The Array is : "; 
    for( int i=0 ; i<4 ; i++){
        cout<<arr[i]<<" "; 
    }

    return 0;
}