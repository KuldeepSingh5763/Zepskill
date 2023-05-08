
#include<iostream>
#include<vector>
using namespace std;
vector<int> findData(vector<int>arr ,int idx,int data,vector<int>ans){
    if(idx == arr.size()){
            return ans;
    }
    if(arr[idx] == data){
        return idx;
    }
    return ans.push_back(findData(arr,idx-1,data,ans));
}


int main(){
    vector<int>arr = {2,2,1,1,1,0,0,0,3,3,3,3,6,6,6,6};

    int data = 6;
    vector<int>ans = findData(arr,arr.size()-1,data,ans);
    for(int ele:ans){
        cout<<ele<<"   ";
    }


}

