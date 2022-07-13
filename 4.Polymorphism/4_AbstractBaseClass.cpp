#include<iostream>
#include<cstring>
using namespace std;
class udaycodes{
    protected : 
        // char title[30];
        string title; 
        float rating; 
    public :
        udaycodes(string s, float r){
            // strcpy(title,s);
            title = s ; 
            rating = r; 
        }
        virtual void display()=0; // pure virtual function  
};
class video : public udaycodes{
    protected : 
        float videoLength; 
    public :
        video(string s , float r , float vl) : udaycodes(s , r){
            videoLength =  vl ; 
        }
        void display(){
            cout<<"Title  : "<<title<<endl; 
            cout<<"Rating : "<<rating<<" Our of 5 Stars"<<endl;
            cout<<"Length of this video is : "<<videoLength<<" minutes "<<endl;  
        }
}; 
class text : public udaycodes{
    protected : 
        int words; 
    public :
        text(string s , float r , int wc) : udaycodes(s , r){
            words =  wc; 
        }
        void display(){
            cout<<"Title  : "<<title<<endl; 
            cout<<"Rating : "<<rating<<"/5"<<endl; 
            cout<<"Words  : "<<words<<endl; 
        }
}; 
int main(){

    string title;  
    float rating , vlen ; 
    int words; 

    // Video Tutorial 
    title ="C++ Course";
    rating = 4.5; 
    vlen = 6;

    video cVideo(title , rating , vlen); 
    cout<<"Video Tutorial : "<<endl;
    cVideo.display(); 

    // Text Tutorial 
    string title2 = "C++ Compleate Notes"; 
    float rating2 = 4.6;
    words = 1029;
    
    text cText(title2 , rating2 , words); 
    cout<<"Text Tutorial : "<<endl;
    cText.display(); 


    // udaycodes *tuts[2]; 

    // tuts[0] = &cVideo;
    // tuts[1] = &cText;

    // tuts[0]->display();
    // tuts[1]->display();

    return 0;   
}