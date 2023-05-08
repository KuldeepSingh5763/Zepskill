#include<iostream>
#include<set>
#include<vector>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int>s;
        for(int i=0; i<n; i++){
            s.insert(arr1[i]);
        }
        for(int j=0 ;j<m; j++){
            s.insert(arr2[j]);
        }
        vector<int>ans(s.begin(),s.end());
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
