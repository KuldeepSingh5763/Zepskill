#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int max1 = -(int)1e9;
        int sum1=0;
        for(int ele:nums){
            sum1 = sum1 + ele;
            max1 = max(max1,sum1);
            if(sum1<0){
                sum1=0;
            }
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
