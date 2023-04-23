#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>nsor(vector<int>&arr){
    stack<int>st;
    int n=arr.size();
    vector<int>ans(n,n);
    st.push(-1);
    for(int i=0; i<n; i++){
        while(st.top() != -1 && arr[st.top()] > arr[i]){
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    return ans;

    }
    vector<int> nsol(vector<int>&arr){
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n,-1);
        st.push(-1);
        for(int i=n-1; i>=0; i--){
            while(st.top() != -1 && arr[st.top()] > arr[i]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& arr) {
        vector<int>sr = nsor(arr);
        vector<int>sl = nsol(arr);
        int area=0;

        for(int i=0; i< arr.size(); i++){
            int w= sr[i] - sl[i] -1;
            int h = arr[i];

            area = max(area, w*h);
        }
        return area;
    }

    int main(){
        vector<int>heights = {2,1,5,6,2,3};
        cout<<largestRectangleArea(heights);
    }
