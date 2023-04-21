#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int>intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int , int>map;

        for(int ele:nums1){
            map[ele]++;
        }

        for(int ele:nums2){
            if(map.find(ele) != map.end()){
                ans.push_back(ele);
                map.erase(ele);
            }
        }
        return ans;
    }

    int main(){
        vector<int>nums1 = {4,9,5};
        vector<int>nums2 = {9,4,9,8,4};

        vector<int>ans = intersection(nums1 , nums2);
        cout<<"Intersection Of GivenTwo Array = ";
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<"   ";
        }

    }
