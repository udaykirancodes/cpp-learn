#include<iostream>
using namespace std;
class Shop{
    int item[100]; 
    int price[100];
    int counter;  
    public : 

        void initCounter(){
            counter = 0 ; 
        }
        void increment(){
            counter++; 
        }
        void setPrice();
        void displayPrice(); 
        
}; 

void Shop :: setPrice(){
    cout<<"Enter Id of your Item "<<counter+1<<endl; 
    cin>>item[counter]; 
    cout<<"Enter Price of your item"<<endl; 
    cin>>price[counter]; 
    increment(); 
}

void Shop :: displayPrice(){
    for(int i=0 ; i<counter ; i++){
        cout<<"The Price of item with ID : "<<item[i]<<" is "<<price[i]<<endl; 
    }
}

int main(){
    Shop udayshops; 
    udayshops.initCounter(); 
    udayshops.setPrice();    
    udayshops.setPrice();    
    udayshops.setPrice(); 
    udayshops.displayPrice();   
    return 0;
}