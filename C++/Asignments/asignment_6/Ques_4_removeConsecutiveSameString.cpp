#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int removeConsecutiveSame(vector <string > v)
    {
        //  If in a sequence, two same words come together then hell destroy each other.
        stack<string>st;
        int s=v.size();
        for(int i=0; i<s; i++){
            if(st.size() >0 && st.top() == v[i]){
                st.pop();
            }
            else{
                st.push(v[i]);
            }
        }
        return st.size();
    }



int main(){
        vector<string>arr = {"ab", "aa", "aa", "bcd", "ab"};
        cout<<"After Remove Consecutives Final Size is = "<<removeConsecutiveSame(arr);
	}
