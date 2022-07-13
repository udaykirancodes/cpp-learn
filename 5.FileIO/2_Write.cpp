#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("sample.txt"); 
    cout<<"Enter your Name "; 
    string name ; 
    cin>>name ; 
    out<<name; 

    out.close(); 
    return 0;
}