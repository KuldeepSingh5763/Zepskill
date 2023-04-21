#include<iostream>
#include<unordered_set>
#include<string>
#include<vector>

using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>set;
        for(char i : allowed){
            set.insert(i);
        }
        int count =0;

        for(string i : words){
            bool ischeck = true;
            for(char x:i ){
                if(set.find(x) == set.end()){
                    ischeck = false;
                }
            }
            if(ischeck){
                count++;
            }
        }
        return count;
    }

    int main(){
    string allowed = "ab";
    vector<string> words = {"ad","bd","aaab","baa","badab"};

    cout<<"Count the Number of Consistent Strings = "<<countConsistentStrings(allowed , words);
    }
