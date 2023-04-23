
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nextGreaterElementOnLeft(vector<int>&arr){
    stack<int>st;
    int n=arr.size();
    vector<int>ans(n,-1);
    st.push(-1);
    for(int i=n-1; i>=0; i--){
        while(st.top() != -1 && arr[st.top()] < arr[i]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;

}
int main(){
    vector<int> arr= {13,7,6,12};

    vector<int>ans = nextGreaterElementOnLeft(arr);

    for(int ele:ans){
        cout<<ele<<"   ";
    }

}
