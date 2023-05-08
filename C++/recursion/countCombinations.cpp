#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<string>codes = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

vector<string>keyPadCombinations(string str){
    if(str.length() == 0){
        vector<string>base;
        base.push_back("");
        return base;
    }
    char ch = str[0];   //'6'
    string rstr = str.substr(1);   // '78'
    string word = codes[ch - '0']; // '6' - '0' = 6

    vector<string>smallAns = keyPadCombinations(rstr);
    vector<string>myAns;

    for(string s:smallAns){
        for(int i=0;i<word.length(); i++){
            myAns.push_back(word[i]+s);
        }
    }
    return myAns;
}



int main(){
    vector<string>ans = keyPadCombinations("678");
    for(string s:ans){
        cout<<s<<"    ";
    }

}
