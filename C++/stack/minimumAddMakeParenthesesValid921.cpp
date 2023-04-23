#include<iostream>
#include<stack>
#include<string>

using namespace std;

int minAddToMakeValid(string s) {
        stack<int>st;
        for(int i=0; i<s.length();i++){
            if(st.size() != 0 && s[st.top()] == '(' && s[i] == ')'){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        return st.size();
    }

    int main(){
        string s = "(((";
        cout<<minAddToMakeValid(s); // Minimum need to make valid parentheses is = 3

    }
