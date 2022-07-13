#include<iostream>
#include<list>
using namespace std;


void display(list<int> &l){
    list <int> :: iterator it;
    for(it=l.begin() ;it!=l.end() ; it++){
        cout<<*it<< " ";
    }
}

int main(){
    list<int>list1; // list of 0 length 
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(8);
    // list1.sort(); //sorting 
    display(list1);
    // Removing elements from the list 
    list1.pop_front();
    list1.pop_back();
    list1.remove(10); // remove all values of 10
    list<int> list2(7) ; // empty list of size 7 

    // merging 
    list1.merge(list2);

    // reversing the list 
    list1.reverse(); 
    
    return 0;
}