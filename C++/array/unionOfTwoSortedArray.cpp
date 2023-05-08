#include<iostream>
#include<vector>
#include<array>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        vector<int>ans;
        int i=0,j=0;
        while(i<n || j<m){
            //Skipping the duplicate value
            while(i>0 && i<n && arr1[i]==arr1[i-1]){
                i++;
            }
            while(j>0 && j<m && arr2[j]==arr2[j-1]){
                j++;
            }

            // When arr exhausted
            if(i>=n){
                ans.push_back(arr2[j++]);
                continue;
            }
            if(j>=m){
                ans.push_back(arr1[i++]);
                continue;
            }

            // comparing of both array
            if(arr1[i]<arr2[j]){
                ans.push_back(arr1[i++]);
            }
            else if(arr1[i]>arr2[j]){
                ans.push_back(arr2[j++]);
            }else{
                ans.push_back(arr1[i++]);
                j++;
            }
        }
        return ans;
    }
    int main(){
        int arr1[] = {1,2,2,3,4,5,5,5,6,7,8};
        int arr2[] = {2,2,3,4,5,6,7,8,8,9,10,11};
        int n = sizeof(arr1)/sizeof(arr1[0]);
        int m = sizeof(arr2)/sizeof(arr2[0]);
        vector<int> ans  = findUnion(arr1,arr2,n,m);
        cout<<"Union of Two Sorted Array : ";
        for(int ele : ans){
                cout<<ele<<" ";
        }
    }
