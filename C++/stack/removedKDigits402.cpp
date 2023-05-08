#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

string removeKdigits(string num, int k) {
    stack<char>st;
    int n = num.length();
    st.push(num[0]);
    for(int i=1; i<n; i++){
        char d = num[i];
        while(st.size() != 0 && k>0 && st.top()>d){
            st.pop();
            k--;
        }
        st.push(num[i]);
    }
    while(st.size() != 0 && k>0){
        st.pop();
        k--;
    }
    string ans = "";
    while(st.size()!=0){
        ans+=st.top();
        st.pop();
    }
    while(ans.size() != 0){
        if(ans.back() != '0'){
            break;
        }
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans.length() == 0 ? "0" : ans;
}
int main(){
    string num = "1432219";
    int k = 3;
    cout<<removeKdigits(num,k);
}
