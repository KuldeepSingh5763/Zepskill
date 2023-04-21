#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

//sentence contains at least one of every letter of the English alphabet.

bool checkIfPangram(string s) {

        unordered_map<char , int>map;

        for(int i=0; i<s.length(); i++){
            map[s[i]]++;
        }

        return map.size() ==26;
    }

    int main(){
        string sentence = "thequickbrownfoxjumpsoverthelazydog";

        cout<<checkIfPangram(sentence);

    }
