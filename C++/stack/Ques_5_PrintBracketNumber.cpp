#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

vector<int> bracketNumbers(string s)
	{
	    // Your code goes here
	    vector<int>ans;
	    stack<int>st;
	    int c=1;
        for(int i=0; i<s.length();i++){
            if(s[i] == ')' && st.size() != 0){
                    ans.push_back(st.top());
                    st.pop();
            }
            else if(s[i] == '('){
                st.push(c);
                c++;
                ans.push_back(st.top());
            }
        }
        return ans;
	}

int main(){
    string s = "(aa(bdc))p(dee)";
    vector<int>ans =bracketNumbers(s);
    for(int ele:ans){
        cout<<ele<<"   ";
    }
}
