#include<iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
                a=max(a,c);
            }
            else{
                c=0;
            }
        }
    return a;
}
 int main(){
        vector<int>arr = {1,1,1,0,0,0,1,1,1,1,0};
        cout<<"Longest Ones = "<<findMaxConsecutiveOnes(arr);

    }
