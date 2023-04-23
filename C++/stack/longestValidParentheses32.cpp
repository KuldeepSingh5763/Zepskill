#include<iostream>
#include<stack>
#include<string>

using namespace std;


int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int count =0;
        for(int i=0; i<s.length();i++){
            if(st.top() != -1 && s[st.top()] == '(' && s[i] == ')'){
                st.pop();
                count = max(count, i-st.top());
            }
            else{
                st.push(i);
            }
        }
        return count;
    }

    int main(){
        string s = "(()()(((()))(()";
        cout<<longestValidParentheses(s); // longest Valid parentheses is 6  = "((()))"
    }
