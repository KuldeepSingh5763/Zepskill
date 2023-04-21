#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int , int>map;

        int res =0 ;

        for( int ele : nums){
            map[ele]++;
        }
        for(auto keyValue : map){
            int count = keyValue.second;

            res = res + (count *(count -1)/2);
        }
        return res;
    }

    int main(){
        vector<int>nums = {1,2,3,1,1,3};
        cout<<"Number of Good Pairs = "<<numIdenticalPairs(nums);
    }
