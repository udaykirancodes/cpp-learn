#include<iostream>
using namespace std;
int main(){
    // If else 
    // int i=10; 
    // if(i<0){
    //     cout<<i; 
    // }
    // else{
    //     cout<<10-i; 
    // }
    // Loops 
    // 1.For Loop 
    cout<<"For Loop "<<endl;
    for(int i=0; i<10 ; i++){
        cout<<i<<endl; 
    }
    // 2.While Loop
    int i=0;  
    cout<<"While Loop "<<endl;
    while(i<10){
        cout<<i<<endl; 
        i++; 
    }
    // 3.Do-While Loop 
    int k = 10; 
    cout<<"Do While Loop "<< endl; 
    do{
        cout<<k<<endl; 
        k--; 
    }while(k>100); 
    return 0;
}