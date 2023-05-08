#include<iostream>
#include<vector>
using namespace std;

vector<int> immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    for(int i=0; i<n-1;i++){
	        if(arr[i]>arr[i+1]){
	            arr[i] = arr[i+1];
	        }
	        else{
	            arr[i] = -1;
	        }
	    }
	    arr[n-1] = -1;

	    return arr;
	}
	int main(){
        vector<int>arr = {4, 2, 1, 5, 3};
        int n = arr.size();
        vector<int>ans = immediateSmaller(arr,n);

        for(int ele:ans){
            cout<<ele<<"   ";
        }

	}
