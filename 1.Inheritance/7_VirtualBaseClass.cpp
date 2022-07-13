#include<iostream>
using namespace std;

class student {
    protected : 
        int roll_no; 
    public: 
        void set_number(int a){
            roll_no  = a ; 
        }
        void printNumber(){
            cout<<"Roll No : "<<roll_no<<endl; 
        }
};

class Test : virtual public student{
    protected : 
        float maths,phy; 
    public:
        void set_marks(float m , float p){
            maths = m;
            phy = p; 
        }
        void printMarks(){
            cout<<"Marks in Maths   : "<<maths<<endl;
            cout<<"Marks in Physics : "<<phy<<endl;
        }
};

class Sports : virtual public student{
    protected : 
        float score; 
    public:
        void setScore(int s){
            score  = s ; 
        }
        void printScore(){
            cout<<"Your Score is : score"<<endl;
        }
};

class Result :  public Test ,  public Sports{
    private : 
        float total ; 
    public : 
        void display(){
            total = maths + phy + score ; 
            printNumber();
            printMarks();
            printScore(); 
            cout<<"Total : "<<total <<endl ; 
        }
};

int main(){
    Result uday; 
    uday.set_number(10);
    uday.set_marks(98,98);
    uday.setScore(10);
    uday.display(); 
    return 0;
}