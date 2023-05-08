
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
       int si=0, ei= nums.size()-1 ;
       while(si<=ei){
           int mid=(si+ei)/2;
           if(nums[mid]==target){
               return mid;
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
    vector<int>arr = {1,3,12,14,23,34,55,65,75,78};
    int data=75;
    cout<<binarySearch(arr,data);
    }
