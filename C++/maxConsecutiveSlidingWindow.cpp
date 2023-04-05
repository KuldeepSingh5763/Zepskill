
// Using Sliding Window Technique.

#include<iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int si=0,ei=0,len=0,count=0;
        int n=nums.size();
        while(ei<n){
            if(nums[ei++] ==0){
                count++;
            }
            while(count>0){
                if(nums[si++] == 0){
                    count--;
                }
            }
            len = max(len , ei-si );
        }
        return len;
    }

    int main(){
        vector<int>arr = {1,1,1,0,0,0,1,1,1,1,0};
        cout<<"Longest Ones = "<<findMaxConsecutiveOnes(arr);

    }
