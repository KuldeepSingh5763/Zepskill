#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> ngor(vector<int>&arr){
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n,-1);
        st.push(-1);
        for(int i=0; i<n; i++){
            while(st.top() != -1 && arr[st.top()] < arr[i]){
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ngorAns = ngor(nums2);
        unordered_map<int,int>map;
        for(int i=0;i<nums2.size(); i++){
            map[nums2[i]]= ngorAns[i];
        }

        vector<int>ans(nums1.size() , -1);

        for(int i=0; i<nums1.size();i++){
            if(map.find(nums1[i]) != map.end()){
                ans[i] = map[nums1[i]];
            }
        }
        return ans;
    }

    int main(){
        vector<int>nums1 = {4,1,2};
        vector<int>nums2 = {1,3,4,2};

        vector<int>ans = nextGreaterElement(nums1 ,nums2);

        for(int ele : ans){
            cout<<ele<<"   ";
        }

    }
