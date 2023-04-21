#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string , int>map1;
// First way Of inserting
    map1.insert({"K" , 1});
    map1.insert({"U" , 1});
    map1.insert({"L" , 1});
    map1.insert({"D" , 1});
    map1.insert({"E" , 2});
    map1.insert({"P" , 1});

    map1["S"] = 1;  // another way of Inserting

    for(auto x : map1){
        string key = x.first;
        int val = x.second;
        cout<<key<<"    "<<val<<endl;
    }

    // return value for specified Key

    cout<<map1["E"]<<endl;
    cout<<map1.at("K")<<endl;

    // Update the value

    map1["D"] =3;

    cout<<map1.at("D")<<endl;

    //Remove Element

    map1.erase("S");

    for(auto x : map1){
        string key = x.first;
        int val = x.second;
        cout<<key<<"    "<<val<<endl;
    }

}
