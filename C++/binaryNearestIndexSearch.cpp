#include<iostream>
#include<vector>
using namespace std;

int binarySearchNearestIndex(vector<int>& nums, int target) {
       int si=0, ei= nums.size()-1;
       while(si<=ei){
           int mid=(si+ei)/2;
           if(nums[mid]==target){
               if(mid+1<=ei && nums[mid+1]==target){
                    si=mid+1;
               }
               else{
                return mid;
               }
           }
           else if(nums[mid]>target){
               ei=mid-1;
           }
           else{
               si=mid+1;
           }
       }
       if((nums[si]-target) > (target-nums[ei])){
            return ei;
       }
       else{
        return si;
       }

    }

    int main(){
    vector<int>arr = {1,3,12,14,23,34,55,65,75,78};
    int data=14;
    cout<<binarySearchNearestIndex(arr,data);
    }
