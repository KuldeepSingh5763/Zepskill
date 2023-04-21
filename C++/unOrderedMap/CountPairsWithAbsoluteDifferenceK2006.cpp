#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int countKDifference(vector<int>& nums, int k) {
        int c=0;
        unordered_map<int , int>map;

        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
            if(map.find(nums[i] + k) != map.end()){
                c+=map[nums[i] + k];
            }
            if(map.find(nums[i] - k) != map.end()){
                c+=map[nums[i] - k];
            }
        }
        return c;

    }

    int main(){
        vector<int>nums = {1,2,2,1};
        int k = 1;

        cout<<"Count Number of Pairs With Absolute Difference K = "<<countKDifference(nums,k);

        // [1,2,2,1]
        //[1,2,2,1]
        //[1,2,2,1]
        //[1,2,2,1]

    }
