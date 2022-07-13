// A -> B -> C 
#include<iostream>
using namespace std;
// Base Class 
class student{
    protected : 
        int roll_num; 
    public :
        void set_roll_num(int ); 
        void get_roll_num(); 
}; 
void student :: set_roll_num(int num){
    roll_num = num ; 
}
void student :: get_roll_num(){
    cout<<"Roll Number : "<<roll_num<<endl; 
}
// Derived Class - second class 
class Exam : public student {
    protected : 
        float maths;
        float phy;
    public :
        void set_marks(float , float);
        void get_marks();
};
void Exam :: set_marks(float m , float p){
    maths = m;
    phy = p;
}
void Exam :: get_marks(){
    cout<<"Mathematics Marks :"<<maths<<endl;
    cout<<"Physics Marks :"<<phy<<endl;
}

// Third Class 
class Result : public Exam{
    float percentage; 
    public:
        void display();
};
void Result :: display(){
    get_roll_num();
    get_marks();
    cout<<"Result is :- "<<(maths+phy)/2<< "%"<<endl; 
}
int main(){
    Result uday;
    uday.set_roll_num(1);  
    // uday.get_roll_num();
    uday.set_marks(80,90);
    // uday.get_marks();  
    uday.display();  
    return 0;
}