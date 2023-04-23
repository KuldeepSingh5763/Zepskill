#include<iostream>
#include<stack>
#include<string>

using namespace std;

string removeOuterParentheses(string s) {
        int bb=0;
        string str;

        for(int i=0; i< s.length(); i++){
            char ch = s[i];
            if(ch == '(' && bb++ >0 ){
                str = str + ch;
            }
            else if(ch == ')' && bb-- >1){
                str =str+ch;
            }
        }
        return str;

    }

    int main(){
        string s = "(()())(())";
        cout<<removeOuterParentheses(s);
    }
