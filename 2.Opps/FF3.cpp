#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x , y ; 
    public: 
        Point(int a , int b){
            x=a; 
            y=b; 
        }
        friend void distance(Point , Point); 
        void displayPoint(){
            cout<<"The Point is : ("<<x<<" , "<<y<<")"<<endl; 
        }
}; 
// create a friend functino which takes 2 point objects and computes the distance between those points 
void distance(Point a , Point b){
    cout<<"Distance is : Square root of "<<(b.x - a.x)*(b.x - a.x)  + (b.y-a.y)*(b.y-a.y)<<endl; 
}
int main(){
    Point a(1,2); 
    Point b(3,4); 
    a.displayPoint();  
    b.displayPoint();  
    distance(a,b); 
    return 0;
}