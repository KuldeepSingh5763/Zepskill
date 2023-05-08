#include<iostream>
#include<vector>
using namespace std;
int findData(vector<int>arr ,int idx,int data){
    if(idx < 0) return -1;
    if(arr[idx] == data){
        return idx;
    }
    return findData(arr,idx-1,data);
}


// int findData(vector<int>arr, int idx, int data){
//    if(idx == arr.size()){
//        return -1;
//    }

//    int ans = findData(arr,idx+1,data);
//    if(ans != -1){
//        return ans;
//    }
//    return arr[idx] == data ? idx : -1;

//}

int main(){
    vector<int>arr = {2,2,1,1,1,0,0,0,3,3,3,3,6,6,6,6};

    int data = 6;

    cout<<findData(arr,arr.size()-1,data);

//    cout<<findData(arr,0,data);
}

