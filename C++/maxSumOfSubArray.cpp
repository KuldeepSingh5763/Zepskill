#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int max1 = INT_MIN;
        int sum1=0;
        for(int i=0;i<size;i++){
            sum1 = sum1 + nums[i];
            max1 = max(max1,sum1);

            sum1 = max(sum1,0);
        }
        return max1;
    }
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>arr(n,0);
    cout<<"Enter the element the Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Max Sum of SubArray  = "<<maxSubArray(arr);
}
