#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
       int si=0, ei= nums.size()-1;
       while(si<=ei){
           int mid=(si+ei)/2;
           if(nums[mid]==target){
               if(mid-1>=0 && nums[mid-1]==target){
                    ei=mid-1;
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
       return -1;
    }

    int main(){
    vector<int>arr = {0,1,2,2,2,2,2,2,4,5,6,6,6,6,7,8,8,8,8};
    int data=6;
    cout<<binarySearch(arr,data);
    }
