#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

// Given a string s and an array of strings words, return the number of words[i] that is a subsequence of s.

int numMatchingSubseq(string s, vector<string>& words) {
    unordered_map<string , int>mp;
    int res =0 ;

    for(string word : words){
        mp[word]++;
    }

    for(auto& word : mp){
        int idx= 0;
        int last = -1;
        bool foundS = true;

        for(char ch : word.first){
            last = s.find(ch,last+1);
            if(last == -1){
                foundS =  false;
                break;
            }
        }
        if(foundS){
            res+=word.second;
        }
    }
    return res;

}

int main(){
    string s = "abcde";
    vector<string>words = {"a","bb","acd","ace"};

    cout<<numMatchingSubseq(s,words);  // output is = 3


}
