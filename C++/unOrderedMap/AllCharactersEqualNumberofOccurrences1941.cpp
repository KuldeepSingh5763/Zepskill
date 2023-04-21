#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

bool areOccurrencesEqual(string s) {
        unordered_map<char,int>map;

        for(char a : s){
            map[a]++;
        }
        int val = map[s[0]];
        for(auto keyValue : map){
            if(val != keyValue.second){
                return false;
            }
        }
        return true;
    }
int main(){
    string s = "abacbc";

    cout<<areOccurrencesEqual(s);

}
