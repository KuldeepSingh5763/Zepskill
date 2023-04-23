#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.size()==0){
                    return false;
                }
                else if(ch == ')' && st.top() != '('){
                    return false;
                }
                else if(ch == ']' && st.top() != '['){
                    return false;
                }
                else if(ch == '}' && st.top() != '{'){
                    return false;
                }
                else{
                    st.pop();
                }
            }

        }
        return st.size() == 0;

    }

    int main(){
        string s1 = "()[]{}";
        string s2 = "((({})";

        cout<<"First string Result = "<<isValid(s1)<<endl;   // It is valid
        cout<<"Second String Result = "<<isValid(s2);  // It is Invalid
    }
