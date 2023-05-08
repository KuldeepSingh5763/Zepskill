#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n=nums.size()-1;
        set<int>arr;
        for(int i=0;i<=n;i++){
            arr.insert(nums[i]);
        }
        nums.clear();
        for(int ele : arr){
            nums.push_back(ele);
        }
        return nums.size();
    }

    int main(){
        vector<int>arr = {0,0,1,1,1,2,2,3,3,4};
        cout<<"After Removing Duplicate Element  Remaining Size = "<<removeDuplicates(arr);
    }
