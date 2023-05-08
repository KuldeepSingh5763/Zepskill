#include<iostream>
#include<vector>
using namespace std;
void runningSum(vector<int> &arr){
    int n=arr.size();
    int sum=0;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        arr1[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<"   ";
    }
}
int main(){
    vector<int>arr = {1,2,3,4};

    cout<<"Before Segregating : "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    runningSum(arr);
}
