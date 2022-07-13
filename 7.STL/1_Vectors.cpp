#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i] << " ";
    }
    cout<<endl;
}

int main(){
    vector<int>vec1;
    for(int i=0;i<5 ; i++){
        vec1.push_back((i+1)*10);
    }
    vector <int> :: iterator iter = vec1.begin();
    vec1.insert(iter , 10 , 65);
    // inserts at the beg of iter(pointer) 
    // takes iterator , size , element 
    // display(vec1);

    // different ways to create a vector 
    vector <int> v1; //zero length interger vector 
    vector <char> v2(4);  //4-element character vector 
    vector <char> v3(v2); //e-element character vector from vec2 
    vector <int> v4(6,10); // 6-element vector of 3s
    // size , element 
    display(v4);
    return 0;
}