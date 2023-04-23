#include<iostream>
#include<stack>
#include<string>

using namespace std;

string minRemoveToMakeValid(string s) {
        stack<int>st;
        for(int i=0; i<s.length();i++){
            if(s[i] == ')'){
                if(st.size() != 0){
                    st.pop();
                }
                else{
                    s[i] = '#';
                }
            }
            else if(s[i] == '('){
                st.push(i);
            }
        }

        while(st.size() != 0){
            s[st.top()] = '#';
            st.pop();
        }

        string ans = "";
        for(int i=0;i<s.length(); i++){
            if(s[i] != '#'){
                ans+=s[i];
            }
        }
        return ans;

    }

    int main(){
        string s = "lee(t(c)o)de)";

        cout<<minRemoveToMakeValid(s);    // Output is = "lee(t(c)o)de"

    }
