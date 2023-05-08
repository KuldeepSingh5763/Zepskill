#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int largestRectangleArea(vector<int>& arr) {
        stack<int>st;
        int n = arr.size();
        st.push(-1);
        int area=0;
        for(int i=0; i< n; i++){
                while(st.top() != -1 && arr[st.top()] >= arr[i]){
                    int h = arr[st.top()];
                    st.pop();
                    int w = i-st.top()-1;
                    area = max(area, w*h);
                }
                st.push(i);
        }
        while(st.top() != -1){
                int h = arr[st.top()];
                st.pop();
                int w = n-st.top()-1;
                area = max(area, w*h);
        }
        return area;
    }

    int main(){
        vector<int>heights = {7,5,4,3,4,6,6,6,1,8,8,8,8,5,1};
        cout<<largestRectangleArea(heights);

    }
