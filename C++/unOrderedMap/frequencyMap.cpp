#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main(){

    unordered_map<char , int>freq;
    string str = "abcccddehgtttyhaaee";

    for(char ch : str){
        freq[ch]++;
    }

    for(auto ele : freq){
        char key = ele.first;
        int val = ele.second;
        cout<<key<<"   "<<val<<endl;
    }
}
