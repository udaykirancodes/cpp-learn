#include<iostream>
#include<fstream>
using namespace std;

/* the usefull classes for working with files in C++ are : 
1.fstreambase
2.ifstream
3.ofstream
*/

int main(){
    // string st = "My Name is Uday";
    // // Opening files using constructor and write it 
    // ofstream out("sample1.txt"); // 
    // out<<st; 
    string st2; 
    // Opening files using constructor and read it ; 
    ifstream in("sample.txt"); 
    // in>>st2; 
    getline(in , st2); // reads one line 
    cout<<st2 ; 
    return 0;
}