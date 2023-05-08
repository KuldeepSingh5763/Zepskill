#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[j++] = nums[i];
            }
        }
        return j;

    }

    int main(){
         vector<int>arr = {1,2,0,5,4,2,3,6,2};
         int val=2;

         cout<<"Number of Remaining Element of Array = "<<removeElement(arr , val);

    }
