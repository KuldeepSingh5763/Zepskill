#include<iostream>
#include<vector>
#include<array>

using namespace std;


int kthElement(int arr1[], int arr2[],int n, int m, int k)
    {
        vector<int>map;
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i] > arr2[j]){
                map.push_back(arr2[j++]);
            }
            else{
                map.push_back(arr1[i++]);
            }
        }
        while(i<n){
            map.push_back(arr1[i++]);
        }
        while(j<m){
            map.push_back(arr2[j++]);
        }
        return map[k-1];
    }

    int main(){
        int arr1[] = {2, 3, 6, 7, 9};
        int arr2[] = {1, 4, 8, 10};
        int k = 5;
        int n = sizeof(arr1)/sizeof(arr1[0]);
        int m =sizeof(arr2)/sizeof(arr2[0]);
        cout<<kthElement(arr1,arr2,n,m,k);

    }
