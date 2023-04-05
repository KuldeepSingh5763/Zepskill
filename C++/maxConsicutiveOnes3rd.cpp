//  Given a binary array nums and an integer k,
//  return the maximum number of consecutive 1's
//  in the array if you can flip at most k 0's.

#include<iostream>
#include<vector>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
        int si=0,ei=0,len=0,count=0;
        int n=nums.size();
        while(ei<n){
            if(nums[ei++] == 0){
                count++;
            }
            while(count > k){
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
        int k=1;  // you can flip at most k 0's  means k number of 0's interchange in 1's.
        cout<<"Longest Ones = "<<longestOnes(arr,k);

    }
