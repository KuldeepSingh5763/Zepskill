#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set;

        for(int i:nums){
            set.insert(i);
        }
        int len=0;
        for(auto ele : nums){
            if(set.find(ele) == set.end()){
                continue;
            }
            set.erase(ele);
            int pre = ele -1;
            int next = ele +1;


            while(set.find(pre) != set.end()){
                set.erase(pre);
                pre--;
            }
            while(set.find(next)!= set.end()){
                set.erase(next);
                next++;
            }
            len = max(len, next-pre-1);
        }
        return len;

    }

    int main(){
        vector<int>nums = {100,4,200,1,3,2};

        cout<<"longest Consecutive = "<<longestConsecutive(nums);

    }
