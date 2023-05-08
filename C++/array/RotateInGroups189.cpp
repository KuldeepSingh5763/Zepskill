#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            temp[(i+k)%n] = nums[i];
        }
        return temp;
    }
    int main(){

        vector<int> arr ={1,2,3,4,5,6,7,8,9,11};
        int k=5;

        cout<<"Before Rotation ";
        for(int ele:arr){
            cout<<ele<<"  ";
        }
        cout<<endl;

        vector<int>ans = rotate(arr,k);
        cout<<"After Rotation =  ";
        for(int ele:ans){
            cout<<ele<<"   ";
        }
    }
