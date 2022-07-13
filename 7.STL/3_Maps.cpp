#include<iostream>
#include<map>
using namespace std;

int main(){
    // creating a map 
    map<string , int> marksMap; 
    marksMap["uday"] = 10;
    marksMap["priya"] = 30;
    marksMap["kiran"] = 20;
    marksMap["pranathi"] = 0;
    map<string , int> :: iterator iter;

    // inserting 
    marksMap.insert({{"name",10},{"name2",11}});
    for(iter=marksMap.begin() ; iter!=marksMap.end() ; iter++){
        cout<<(*iter).first<<" "<<(*iter).second <<endl;
    }
    cout<<endl; 
    return 0;
}