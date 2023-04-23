#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nextGreaterElements(vector<int>& arr) {
        int n= arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        st.push(-1);
        for(int i=0; i<2*n; i++){
            while(st.top() != -1 && arr[st.top()] < arr[i%n]){
            ans[st.top()] = arr[i%n];
            st.pop();
            }
            if(i<n){
                st.push(i);
            }
        }
        return ans;
    }

    int main(){
        vector<int>nums = {1,2,3,4,3};
            vector<int>ans = nextGreaterElements(nums);

            for(int ele:ans){
                cout<<ele<<"   ";
            }


    }
