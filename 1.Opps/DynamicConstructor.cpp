#include<iostream>
using namespace std;


class BankDeposit{
    int principal; 
    int years; 
    float interestReate; 
    float returnValue; 

    public :
        BankDeposit(){

        }
        BankDeposit(int p , int y , float r); 
        BankDeposit(int p , int y , int r ); 
        void show(); 
}; 
// Integer Input 
BankDeposit :: BankDeposit(int p , int y , int r){
    principal = p;
    years = y ; 
    interestReate = float(r)/100 ; 
    for(int i=0 ; i<y ; i++){
        returnValue *=(1+interestReate); 
    }
}
// Floating Point Integer 
BankDeposit :: BankDeposit(int p , int y , float r ){
    principal = p;
    years = y ; 
    interestReate = r ; 
    returnValue  = principal; 
    for( int i=0; i<y ; i++){
        returnValue *= (1+interestReate); 
    }
}
void BankDeposit :: show(){
    cout<<endl<<"Principal Amout : "<<principal<<endl 
        <<"Return value after "<<years 
        <<" is "<<returnValue<<endl; 
}
int main(){
    BankDeposit bd1 , bd2 , bd3 ; 
    int p,y; 
    float r; 
    int R; 
    cout<<"Enter the value of P,Y,R"<<endl; 
    cin>>p>>y>>r; 
    bd1 = BankDeposit(p,y,r); 
    bd1.show(); 
    return 0;
}