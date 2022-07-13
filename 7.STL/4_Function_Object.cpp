#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
// Function objects: 
// function wrapped in a class so that it available like an object.
int main(){
    int arr[] = {5,4,3,2,1}; 
    sort(arr,arr+2); // sorts 
    for(int i=0;i<5;i++){
        cout<<arr[i]<< " ";
    }
    
    return 0;
}