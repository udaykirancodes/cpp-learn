#include<iostream>
using namespace std;

class shop{
    int id; 
    float price; 
    public : 
        void setData(int a , float b){
            id = a; 
            price = b ; 
        }
        void getData(){
            cout<<"Code of this item is : "<<id<<endl;
            cout<<"Price of this item is : "<<price<<endl;
        }
};

int main(){
    int size = 3; 
    shop *ptr = new shop[size];
    shop *ptrTemp = ptr; 
    int p , q;  
    for (int i = 0; i < size ; i++){
        cout<<"Enter Id and Price of item "<<i+1 <<endl; 
        cin>>p>>q; 
        ptr->setData(p,q);
        ptr++; 
    }
    for (int i = 0; i < size ; i++){
        cout<<"Item "<<i+1<<endl; 
        ptrTemp->getData(); 
        ptrTemp++; 
    }

    return 0;
}