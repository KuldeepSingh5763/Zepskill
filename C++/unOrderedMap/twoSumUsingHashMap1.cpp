#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector <int>ans;
        unordered_map<int, int>map;

        for(int i=0; i<nums.size(); i++){
            if(map.find(target - nums[i]) != map.end()){
                ans.push_back(i);
                ans.push_back(map[target - nums[i]]);
                return ans;
            }
            map[nums[i]] = i;
        }
        return ans;

    }

    int main(){
        vector<int>nums = {2,7,11,15};
        int target = 9;

        vector<int>ans = twoSum(nums ,target);
        for(int ele : ans){
            cout<<ele<<"   ";
        }

    }
