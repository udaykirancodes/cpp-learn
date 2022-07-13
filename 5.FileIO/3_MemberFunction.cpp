#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out ; 
    out.open("sample.txt"); 
    out<<"Hello World"<<endl;
    out<<"This is Udaykian"<<endl;
    out<<"CEO of my own company"<<endl;
    out.close();

    // reading a file 
    string s ; 
    ifstream in; 
    in.open("sample.txt"); 
    while(!in.eof()){
        getline(in , s); 
        cout<<s<<endl; 
    }
    in.close(); 
    return 0;
}