#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main(){

    unordered_map<char , vector<int>>res;
    string str = "abcccddehgtttyhaaee";

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        res[ch].push_back(i);
    }

    for(auto keyvalue : res){
        cout<<keyvalue.first<< "=>";
        for(int ele : keyvalue.second ){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}
