#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m = matrix[0].size();
        int si=0;
        int ei= (m*n)-1;
        while(si<=ei){
            int mid = (ei+si)/2;
            int val = matrix[mid/m][mid%m];

            if(val==target){
                return true;
            }
            else if(val<target){
                si=mid+1;
            }
            else{
                ei = mid-1;
            }
        }
        return false;

    }
    int main(){
        vector<vector<int>>arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        int data=3;
        cout<<"Data in 2D Matrix = "<<searchMatrix(arr,data);

    }
