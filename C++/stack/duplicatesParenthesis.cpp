#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isDuplicate(string &str){
    stack<char>st;

    for(int i=0;i<str.length(); i++){
        char ch=str[i];
        if(ch == ')'){
            if(st.top() == '('){
                 return true;
               }
               else{
                    while(st.top() != '('){
                            st.pop();
                          }
                          st.pop();
               }
        }
        else{
            st.push(ch);
        }

    }
    return false;
}

int main(){

    string str = "(((a+(b)))+(c+d))";

    cout<<isDuplicate(str);
    return 0;

}

